/*
 * XREFs of _LdrpAddRedirectedFunction@12 @ 0x4B333F08
 * Callers:
 *     _LdrpBuildImportRedirection@8 @ 0x4B334238 (_LdrpBuildImportRedirection@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlInitAnsiStringEx@8 @ 0x4B2DFED0 (_RtlInitAnsiStringEx@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpCompareRedirectedFunction@8 @ 0x4B334418 (_LdrpCompareRedirectedFunction@8.c)
 *     _LdrpHashAsciizString@4 @ 0x4B334A36 (_LdrpHashAsciizString@4.c)
 */

int __fastcall LdrpAddRedirectedFunction(int a1, int a2, int a3)
{
  int inited; // ebx
  _WORD *v5; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  int Heap; // eax
  _DWORD *v13; // edx
  void *v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  void *v18; // edx
  int v19; // esi
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  const char *v24; // [esp-4h] [ebp-260h]
  _DWORD v25[5]; // [esp+10h] [ebp-24Ch] BYREF
  STRING DestinationString; // [esp+24h] [ebp-238h] BYREF
  int v27; // [esp+2Ch] [ebp-230h]
  int v28; // [esp+30h] [ebp-22Ch]
  int v29; // [esp+34h] [ebp-228h]
  int v30; // [esp+38h] [ebp-224h]
  BOOL v31; // [esp+3Ch] [ebp-220h] BYREF
  int v32; // [esp+40h] [ebp-21Ch] BYREF
  _WORD *v33; // [esp+44h] [ebp-218h]
  _WORD v34[128]; // [esp+48h] [ebp-214h] BYREF
  int v35; // [esp+148h] [ebp-114h] BYREF
  void *Src; // [esp+14Ch] [ebp-110h]
  _WORD v37[130]; // [esp+150h] [ebp-10Ch] BYREF

  v28 = a2;
  Src = v37;
  v37[0] = 0;
  v29 = a1;
  v33 = v34;
  v24 = *(const char **)a1;
  v34[0] = 0;
  v35 = 0x1000000;
  v32 = 0x1000000;
  inited = RtlInitAnsiStringEx(&DestinationString, v24);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v32, &DestinationString);
    if ( inited >= 0 )
    {
      v31 = 0;
      inited = LdrpPreprocessDllName((unsigned __int16 *)&v32, (unsigned __int16 *)&v35, 0, &v31);
      DestinationString.Buffer = (char *)inited;
      if ( inited >= 0 )
      {
        v25[3] = v35;
        v5 = Src;
        v25[4] = Src;
        if ( (v31 & 0x20) == 0 )
        {
          v5 = (char *)Src + (unsigned __int16)v35 - 2;
          if ( v5 >= Src )
          {
            while ( 1 )
            {
              v6 = (unsigned __int16)*v5;
              if ( v6 == 92 || v6 == 47 )
                break;
              if ( --v5 < Src )
                goto LABEL_11;
            }
            ++v5;
          }
LABEL_11:
          RtlInitUnicodeStringEx((int)&v25[3], v5);
        }
        v25[2] = *(_DWORD *)(a1 + 4);
        v25[0] = LdrpHashAsciizString();
        v7 = LdrpHashUnicodeString(&v25[3]);
        v8 = LdrpRedirectionTree;
        v25[1] = v7;
        if ( (dword_4B3A6714 & 1) != 0 )
        {
          if ( LdrpRedirectionTree )
            v8 = (unsigned int)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          else
            v8 = 0;
        }
        v9 = dword_4B3A6714 & 1;
        if ( !v8 )
          goto LABEL_29;
        do
        {
          v10 = LdrpCompareRedirectedFunction(v25, v8);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              break;
            v11 = *(_DWORD *)(v8 + 4);
          }
          else
          {
            v11 = *(_DWORD *)v8;
          }
          if ( v9 && v11 )
            v8 ^= v11;
          else
            v8 = v11;
        }
        while ( v8 );
        if ( v8 && !LdrpRedirectionByFunctionCalloutFunc )
        {
          inited = -1073739509;
        }
        else
        {
LABEL_29:
          Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, LOWORD(v25[3]) + 42);
          v13 = (_DWORD *)Heap;
          v30 = Heap;
          if ( Heap )
          {
            v14 = (void *)(Heap + 12);
            v27 = Heap + 12;
            v15 = v29;
            qmemcpy(v14, v25, 0x14u);
            v16 = v30;
            v13[8] = *(_DWORD *)(v15 + 8);
            v17 = *(unsigned __int16 *)(v16 + 24);
            v13[9] = v28;
            v18 = v13 + 10;
            *(_DWORD *)(v16 + 28) = v18;
            *(_WORD *)(v16 + 26) = v17 + 2;
            memcpy(v18, v5, v17 + 2);
            v19 = LdrpRedirectionTree;
            if ( (dword_4B3A6714 & 1) != 0 )
            {
              if ( LdrpRedirectionTree )
                v19 = (unsigned int)&LdrpRedirectionTree ^ LdrpRedirectionTree;
              else
                v19 = 0;
            }
            v20 = dword_4B3A6714 & 1;
            LOBYTE(v31) = 0;
            if ( v19 )
            {
              v21 = v27;
              while ( 1 )
              {
                if ( (int)LdrpCompareRedirectedFunction(v21, v19) < 0 )
                {
                  v22 = *(_DWORD *)v19;
                  if ( v20 )
                  {
                    if ( !v22 )
                      goto LABEL_48;
                    v22 ^= v19;
                  }
                  if ( !v22 )
                  {
LABEL_48:
                    LOBYTE(v31) = 0;
                    break;
                  }
                }
                else
                {
                  v22 = *(_DWORD *)(v19 + 4);
                  if ( v20 )
                  {
                    if ( !v22 )
                      goto LABEL_42;
                    v22 ^= v19;
                  }
                  if ( !v22 )
                  {
LABEL_42:
                    LOBYTE(v31) = 1;
                    break;
                  }
                }
                v19 = v22;
              }
            }
            RtlRbInsertNodeEx(&LdrpRedirectionTree, v19, v31, v30);
            inited = (int)DestinationString.Buffer;
          }
          else
          {
            inited = -1073741801;
          }
        }
      }
    }
  }
  if ( v37 != Src )
    RtlDeleteBoundaryDescriptor((int)Src);
  v35 = 0x1000000;
  Src = v37;
  v37[0] = 0;
  if ( v34 != v33 )
    RtlDeleteBoundaryDescriptor((int)v33);
  return inited;
}
