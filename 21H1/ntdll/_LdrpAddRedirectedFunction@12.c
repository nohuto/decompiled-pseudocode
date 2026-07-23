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

int __fastcall LdrpAddRedirectedFunction(int a1, _RTL_BALANCED_NODE *a2, int a3)
{
  int inited; // ebx
  wchar_t *Buffer; // ebx
  int v6; // eax
  int v7; // eax
  _RTL_BALANCED_NODE *Root; // esi
  int v9; // edi
  int v10; // eax
  _RTL_BALANCED_NODE *v11; // eax
  _RTL_BALANCED_NODE *Heap; // eax
  _RTL_BALANCED_NODE *v13; // edx
  _RTL_BALANCED_NODE *v14; // edi
  int v15; // eax
  PRTL_BALANCED_NODE v16; // esi
  int v17; // ecx
  _RTL_BALANCED_NODE *v18; // edx
  _RTL_BALANCED_NODE *v19; // esi
  int v20; // edi
  _RTL_BALANCED_NODE *v21; // ebx
  _RTL_BALANCED_NODE *v22; // eax
  SIZE_T v24; // [esp-4h] [ebp-260h]
  const CHAR *v25; // [esp-4h] [ebp-260h]
  size_t v26; // [esp-4h] [ebp-260h]
  _DWORD v27[5]; // [esp+10h] [ebp-24Ch] BYREF
  _STRING DestinationString; // [esp+24h] [ebp-238h] BYREF
  _RTL_BALANCED_NODE *v29; // [esp+2Ch] [ebp-230h]
  _RTL_BALANCED_NODE *v30; // [esp+30h] [ebp-22Ch]
  int v31; // [esp+34h] [ebp-228h]
  PRTL_BALANCED_NODE Node; // [esp+38h] [ebp-224h]
  BOOLEAN Right[4]; // [esp+3Ch] [ebp-220h] BYREF
  _UNICODE_STRING OriginalName; // [esp+40h] [ebp-21Ch] BYREF
  _WORD v35[128]; // [esp+48h] [ebp-214h] BYREF
  _UNICODE_STRING SystemPath; // [esp+148h] [ebp-114h] BYREF
  _WORD v37[130]; // [esp+150h] [ebp-10Ch] BYREF

  v30 = a2;
  SystemPath.Buffer = v37;
  v37[0] = 0;
  v31 = a1;
  OriginalName.Buffer = v35;
  v25 = *(const CHAR **)a1;
  v35[0] = 0;
  *(_DWORD *)&SystemPath.Length = 0x1000000;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  inited = RtlInitAnsiStringEx(&DestinationString, v25);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer(&OriginalName.Length, &DestinationString);
    if ( inited >= 0 )
    {
      *(_DWORD *)Right = 0;
      inited = LdrpPreprocessDllName(&OriginalName, &SystemPath, 0, (int *)Right);
      DestinationString.Buffer = (char *)inited;
      if ( inited >= 0 )
      {
        *(_UNICODE_STRING *)&v27[3] = SystemPath;
        Buffer = SystemPath.Buffer;
        if ( (Right[0] & 0x20) == 0 )
        {
          Buffer = (wchar_t *)((char *)SystemPath.Buffer + SystemPath.Length - 2);
          if ( Buffer >= SystemPath.Buffer )
          {
            while ( 1 )
            {
              v6 = *Buffer;
              if ( v6 == 92 || v6 == 47 )
                break;
              if ( --Buffer < SystemPath.Buffer )
                goto LABEL_11;
            }
            ++Buffer;
          }
LABEL_11:
          RtlInitUnicodeStringEx((PUNICODE_STRING)&v27[3], (PCWSTR)Buffer);
        }
        v27[2] = *(_DWORD *)(a1 + 4);
        v27[0] = LdrpHashAsciizString();
        v7 = LdrpHashUnicodeString(&v27[3]);
        Root = LdrpRedirectionTree.Root;
        v27[1] = v7;
        if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 )
        {
          if ( LdrpRedirectionTree.Root )
            Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpRedirectionTree ^ (unsigned int)LdrpRedirectionTree.Root);
          else
            Root = 0;
        }
        v9 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
        if ( !Root )
          goto LABEL_29;
        do
        {
          v10 = LdrpCompareRedirectedFunction(v27, Root);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              break;
            v11 = Root->Children[1];
          }
          else
          {
            v11 = Root->Children[0];
          }
          if ( v9 && v11 )
            Root = (_RTL_BALANCED_NODE *)((unsigned int)v11 ^ (unsigned int)Root);
          else
            Root = v11;
        }
        while ( Root );
        if ( Root && !LdrpRedirectionByFunctionCalloutFunc )
        {
          inited = -1073739509;
        }
        else
        {
LABEL_29:
          LODWORD(v24) = LOWORD(v27[3]) + 42;
          Heap = (_RTL_BALANCED_NODE *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v24);
          v13 = Heap;
          Node = Heap;
          if ( Heap )
          {
            v14 = Heap + 1;
            v29 = Heap + 1;
            v15 = v31;
            qmemcpy(v14, v27, 0x14u);
            v16 = Node;
            v13[2].ParentValue = *(_DWORD *)(v15 + 8);
            v17 = LOWORD(v16[2].Children[0]);
            v13[3].Children[0] = v30;
            v18 = (_RTL_BALANCED_NODE *)((char *)v13 + 40);
            v16[2].Children[1] = v18;
            LODWORD(v26) = v17 + 2;
            HIWORD(v16[2].Left) = v17 + 2;
            memcpy(v18, Buffer, v26);
            v19 = LdrpRedirectionTree.Root;
            if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 )
            {
              if ( LdrpRedirectionTree.Root )
                v19 = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpRedirectionTree ^ (unsigned int)LdrpRedirectionTree.Root);
              else
                v19 = 0;
            }
            v20 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
            Right[0] = 0;
            if ( v19 )
            {
              v21 = v29;
              while ( 1 )
              {
                if ( (int)LdrpCompareRedirectedFunction(v21, v19) < 0 )
                {
                  v22 = v19->Children[0];
                  if ( v20 )
                  {
                    if ( !v22 )
                      goto LABEL_48;
                    v22 = (_RTL_BALANCED_NODE *)((unsigned int)v19 ^ (unsigned int)v22);
                  }
                  if ( !v22 )
                  {
LABEL_48:
                    Right[0] = 0;
                    break;
                  }
                }
                else
                {
                  v22 = v19->Children[1];
                  if ( v20 )
                  {
                    if ( !v22 )
                      goto LABEL_42;
                    v22 = (_RTL_BALANCED_NODE *)((unsigned int)v19 ^ (unsigned int)v22);
                  }
                  if ( !v22 )
                  {
LABEL_42:
                    Right[0] = 1;
                    break;
                  }
                }
                v19 = v22;
              }
            }
            RtlRbInsertNodeEx(&LdrpRedirectionTree, v19, Right[0], Node);
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
  if ( v37 != SystemPath.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)SystemPath.Buffer);
  *(_DWORD *)&SystemPath.Length = 0x1000000;
  SystemPath.Buffer = v37;
  v37[0] = 0;
  if ( v35 != OriginalName.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)OriginalName.Buffer);
  return inited;
}
