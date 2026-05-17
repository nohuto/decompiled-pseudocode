/*
 * XREFs of _RtlpLookupSafeCurDirList@0 @ 0x4B33D088
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 */

int __stdcall RtlpLookupSafeCurDirList()
{
  int result; // eax
  int *Heap; // eax
  int *v2; // esi
  HANDLE v3; // edi
  int v4; // edx
  signed __int32 v5; // ecx
  int v6; // edi
  int i; // eax
  int *v8; // edx
  signed __int32 v9; // edi
  int *v10; // eax
  int v11; // ecx
  int v12; // [esp-Ch] [ebp-684h]
  int v13; // [esp-4h] [ebp-67Ch]
  int v14; // [esp+10h] [ebp-668h] BYREF
  char *v15; // [esp+14h] [ebp-664h]
  int v16; // [esp+18h] [ebp-660h] BYREF
  char *v17; // [esp+1Ch] [ebp-65Ch]
  int v18; // [esp+20h] [ebp-658h] BYREF
  char *v19; // [esp+24h] [ebp-654h]
  int v20; // [esp+28h] [ebp-650h] BYREF
  HANDLE Handle; // [esp+2Ch] [ebp-64Ch] BYREF
  char v22[4]; // [esp+30h] [ebp-648h] BYREF
  int v23; // [esp+34h] [ebp-644h]
  char v24; // [esp+3Ch] [ebp-63Ch] BYREF
  char v25[4]; // [esp+248h] [ebp-430h] BYREF
  int v26; // [esp+24Ch] [ebp-42Ch]
  int v27; // [esp+250h] [ebp-428h]
  char v28; // [esp+254h] [ebp-424h] BYREF
  char v29[12]; // [esp+458h] [ebp-220h] BYREF
  int v30; // [esp+464h] [ebp-214h]
  char v31; // [esp+468h] [ebp-210h] BYREF

  result = dword_4B3A393C;
  v14 = 34078720;
  v15 = 0;
  v18 = 34078720;
  v19 = 0;
  v16 = 0x2000000;
  v17 = 0;
  if ( dword_4B3A393C == -1 )
  {
    v17 = &v28;
    v19 = &v24;
    v15 = &v31;
    Heap = (int *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = (int)Heap;
      *Heap = (int)Heap;
      v3 = (HANDLE)dword_4B3A69E8;
      Handle = (HANDLE)dword_4B3A69E8;
      if ( !dword_4B3A69E8 )
      {
        v4 = ZwOpenKey((int)&Handle, 1, (int)dword_4B281BC0);
        if ( v4 >= 0 )
        {
          v5 = (signed __int32)Handle;
        }
        else
        {
          v5 = -1;
          Handle = (HANDLE)-1;
        }
        v3 = (HANDLE)_InterlockedCompareExchange(&dword_4B3A69E8, v5, 0);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(Handle);
          Handle = v3;
        }
        else
        {
          v3 = Handle;
        }
      }
      if ( (v3 != (HANDLE)-1
         && ZwQueryValueKey((int)v3, (int)&dword_4B281BB0, 2, (int)v29, 16, (int)&v20) >= 0
         && v20 == 16
         && v30
         && (v30 == 1 ? v30 : 0) != 0
         || RtlQueryEnvironmentVariable_U(0, (unsigned __int16 *)&dword_4B281BB8, (int)&v18) >= 0
         && RtlpEnsureTailingSlashAndAddToList((int)v2, (int)&v18) >= 0)
        && Handle != (HANDLE)-1 )
      {
        v6 = 0;
        for ( i = NtEnumerateValueKey((int)Handle, 0, 0, (int)v25, 524, (int)&v20);
              i != -2147483622;
              i = NtEnumerateValueKey((int)Handle, v6, 0, (int)v25, 524, (int)&v20) )
        {
          if ( i != -2147483643 )
          {
            if ( i < 0 )
              break;
            if ( v27 && (v26 == 1 || v26 == 2) )
            {
              LOWORD(v16) = v27;
              if ( ZwQueryValueKey((int)Handle, (int)&v16, 2, (int)v22, 532, (int)&v20) >= 0 && (v26 == 1 || v26 == 2) )
              {
                LOWORD(v18) = 2 * ((unsigned int)(v20 - 12) >> 1) - 2;
                if ( v23 == 2 )
                {
                  if ( RtlExpandEnvironmentStrings_U(0, (unsigned __int16 *)&v18, (int)&v14, 0) < 0 )
                    goto LABEL_34;
                  v8 = &v14;
                }
                else
                {
                  v8 = &v18;
                }
                RtlpEnsureTailingSlashAndAddToList((int)v2, (int)v8);
              }
            }
          }
LABEL_34:
          ++v6;
        }
      }
    }
    v9 = _InterlockedCompareExchange(&dword_4B3A393C, (signed __int32)v2, -1);
    if ( v9 == -1 )
    {
      return (int)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v10 = (int *)*v2;
          if ( (int *)*v2 == v2 )
            break;
          if ( (int *)v10[1] != v2 || (v11 = *v10, *(int **)(*v10 + 4) != v10) )
            __fastfail(3u);
          v13 = *v2;
          v12 = LdrpHeap;
          *v2 = v11;
          *(_DWORD *)(v11 + 4) = v2;
          RtlFreeHeap(v12, 0, v13);
        }
        RtlFreeHeap(LdrpHeap, 0, (int)v2);
      }
      return v9;
    }
  }
  return result;
}
