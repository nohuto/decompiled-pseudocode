/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C0086E30
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v6; // ebx
  GdiHandleManager *v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD v21[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  _QWORD *v23; // [rsp+40h] [rbp-C8h]
  _QWORD v24[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v24, 0, sizeof(v24));
  v22 = 0LL;
  result = (__int64)v24;
  v23 = v24;
  v6 = 0;
  v21[0] = 1LL;
  v21[1] = -3LL;
LABEL_2:
  v7 = gpHandleManager;
  while ( ++v6 < *(_DWORD *)gpHandleManager )
  {
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    result = v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
    if ( v6 < (unsigned int)result )
    {
      if ( v6 >= v9 )
        v10 = ((v6 - v9) >> 16) + 1;
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
      if ( (_DWORD)v10 )
        v12 = v6 + ((1 - (_DWORD)v10) << 16) - v9;
      else
        v12 = v6;
      v13 = 0LL;
      if ( v12 >= *(_DWORD *)(v11 + 20) )
      {
        v14 = 0LL;
      }
      else
      {
        result = *(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8));
        v14 = *(_QWORD *)(result + 16LL * (unsigned __int8)v12 + 8);
      }
      if ( v14 )
      {
        result = *(_QWORD *)v11;
        v13 = *(_QWORD *)v11 + 24LL * v12;
      }
      if ( v13 )
      {
        if ( !v6 )
          break;
        if ( *(_BYTE *)(v13 + 14) == a1 )
        {
          result = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v6);
          v15 = *((_QWORD *)v7 + 2);
          v16 = (unsigned int)result;
          v17 = *(_DWORD *)(v15 + 2056);
          if ( (unsigned int)result < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)result >= v17 )
              v18 = (((unsigned int)result - v17) >> 16) + 1;
            else
              v18 = 0LL;
            v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
            if ( (_DWORD)v18 )
            {
              result = ((1 - (_DWORD)v18) << 16) - v17;
              v16 = (unsigned int)(result + v16);
            }
            if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
            {
              v20 = 0LL;
            }
            else
            {
              result = *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8));
              v20 = *(_QWORD *)(result + 16LL * (unsigned __int8)v16 + 8);
            }
            if ( v20 )
            {
              result = 2LL * v4++;
              v24[result] = v20;
              v24[result + 1] = a2;
            }
          }
        }
        if ( v4 == 16 )
        {
          v22 = 16LL;
          result = MmPrefetchVirtualAddresses(v21);
          v4 = 0;
        }
        goto LABEL_2;
      }
    }
  }
  if ( v4 )
  {
    v22 = v4;
    return MmPrefetchVirtualAddresses(v21);
  }
  return result;
}
