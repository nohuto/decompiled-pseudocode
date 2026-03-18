/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C0023840
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

int __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
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
  _QWORD v22[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  _QWORD *v24; // [rsp+40h] [rbp-C8h]
  _QWORD v25[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v25, 0, sizeof(v25));
  v23 = 0LL;
  v5 = (__int64)v25;
  v24 = v25;
  v6 = 0;
  v22[0] = 1LL;
  v22[1] = -3LL;
LABEL_2:
  v7 = gpHandleManager;
  while ( ++v6 < *(_DWORD *)gpHandleManager )
  {
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    LODWORD(v5) = v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
    if ( v6 < (unsigned int)v5 )
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
        v5 = *(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8));
        v14 = *(_QWORD *)(v5 + 16LL * (unsigned __int8)v12 + 8);
      }
      if ( v14 )
      {
        v5 = *(_QWORD *)v11;
        v13 = *(_QWORD *)v11 + 24LL * v12;
      }
      if ( v13 )
      {
        if ( !v6 )
          break;
        if ( *(_BYTE *)(v13 + 14) == a1 )
        {
          LODWORD(v5) = GdiHandleManager::DecodeIndex(gpHandleManager, v6);
          v15 = *((_QWORD *)v7 + 2);
          v16 = (unsigned int)v5;
          v17 = *(_DWORD *)(v15 + 2056);
          if ( (unsigned int)v5 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v5 >= v17 )
              v18 = (((unsigned int)v5 - v17) >> 16) + 1;
            else
              v18 = 0LL;
            v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
            if ( (_DWORD)v18 )
            {
              LODWORD(v5) = ((1 - (_DWORD)v18) << 16) - v17;
              v16 = (unsigned int)(v5 + v16);
            }
            if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
            {
              v20 = 0LL;
            }
            else
            {
              v5 = *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8));
              v20 = *(_QWORD *)(v5 + 16LL * (unsigned __int8)v16 + 8);
            }
            if ( v20 )
            {
              v5 = 2LL * v4++;
              v25[v5] = v20;
              v25[v5 + 1] = a2;
            }
          }
        }
        if ( v4 == 16 )
        {
          v23 = 16LL;
          LODWORD(v5) = MmPrefetchVirtualAddresses(v22);
          v4 = 0;
        }
        goto LABEL_2;
      }
    }
  }
  if ( v4 )
  {
    v23 = v4;
    LODWORD(v5) = MmPrefetchVirtualAddresses(v22);
  }
  return v5;
}
