/*
 * XREFs of BiEnumerateSubKeys @ 0x1407836E8
 * Callers:
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x14096EEEC (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14025166C (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x14039B678 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14039B718 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  ULONG v6; // r13d
  unsigned int *v7; // r15
  void *v8; // r12
  NTSTATUS v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char *PoolWithTag; // rax
  char *v18; // r12
  __int64 v19; // r8
  ULONG i; // esi
  NTSTATUS v21; // eax
  char *v22; // r12
  unsigned int v24; // [rsp+34h] [rbp-B4h]
  void *v25; // [rsp+40h] [rbp-A8h]
  _QWORD *v26; // [rsp+48h] [rbp-A0h]
  ULONG v27; // [rsp+50h] [rbp-98h] BYREF
  ULONG v28; // [rsp+54h] [rbp-94h]
  _QWORD *v29; // [rsp+58h] [rbp-90h]
  ULONG *v30; // [rsp+60h] [rbp-88h]
  _QWORD *v31; // [rsp+68h] [rbp-80h]
  ULONG *v32; // [rsp+70h] [rbp-78h]
  int v33[4]; // [rsp+78h] [rbp-70h] BYREF
  __int128 v34; // [rsp+88h] [rbp-60h]
  __int128 v35; // [rsp+98h] [rbp-50h]

  v30 = a3;
  v3 = a2;
  v29 = a2;
  v31 = a2;
  v32 = a3;
  v28 = 0;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v27 = 0;
  v5 = 0;
  v24 = 0;
  v6 = -1;
  while ( 1 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v7 = 0LL;
    v8 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v25 = a1;
    v9 = BiZwQueryKey(a1, KeyFullInformation, v33, 0x30u, &v27);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v28 = DWORD1(v34);
      if ( DWORD1(v34) )
      {
        v10 = DWORD2(v34) + 2;
        if ( (unsigned int)(DWORD2(v34) + 2) < DWORD2(v34) )
        {
          v9 = -1073741675;
          v10 = -1;
        }
        else
        {
          v9 = 0;
        }
        v11 = DWORD1(v34);
        if ( v9 >= 0 )
        {
          v12 = DWORD1(v34) * (unsigned __int64)v10;
          v10 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v10 = v12;
          v9 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        if ( v9 >= 0 )
        {
          v13 = 8LL * DWORD1(v34);
          v14 = -1;
          if ( v13 <= 0xFFFFFFFF )
            v14 = v13;
          v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v13 <= 0xFFFFFFFF )
          {
            v15 = v14 + v10;
            v16 = -1;
            if ( v14 + v10 >= v14 )
              v16 = v14 + v10;
            v9 = v15 < v14 ? 0xC0000095 : 0;
            if ( v15 >= v14 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
              v8 = PoolWithTag;
              v26 = PoolWithTag;
              if ( PoolWithTag )
              {
                v18 = &PoolWithTag[8 * v11];
                if ( DWORD2(v34) < 0xFFFFFFE6 )
                  v6 = DWORD2(v34) + 26;
                v9 = DWORD2(v34) >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( (unsigned int)(DWORD2(v34) + 26) >= 0x1A )
                {
                  v7 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
                  if ( v7 )
                  {
                    for ( i = 0; ; ++i )
                    {
                      if ( i >= v28 )
                        goto LABEL_28;
                      v21 = BiZwEnumerateKey(v25, i, v19, v7, v6, &v27);
                      v9 = v21;
                      if ( v21 == -2147483622 )
                        break;
                      if ( v21 < 0 )
                        goto LABEL_44;
                      if ( (unsigned __int64)v7[3] + 2 > v10 )
                      {
                        v9 = -1073741789;
                        goto LABEL_44;
                      }
                      v26[i] = v18;
                      memmove(v18, v7 + 4, v7[3]);
                      v22 = &v18[v7[3]];
                      *(_WORD *)v22 = 0;
                      v18 = v22 + 2;
                      v10 += -2 - v7[3];
                    }
                    if ( i )
                    {
LABEL_28:
                      v8 = v26;
                      *v29 = v26;
                      *v30 = i;
                      v9 = 0;
                      goto LABEL_29;
                    }
                  }
                  else
                  {
                    v9 = -1073741670;
                  }
                }
LABEL_44:
                v8 = v26;
LABEL_29:
                v6 = -1;
              }
              else
              {
                v9 = -1073741670;
              }
            }
          }
        }
        a1 = v25;
        v5 = v24;
      }
      else
      {
        v9 = 0;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v9 < 0 && v8 )
      ExFreePoolWithTag(v8, 0x4B444342u);
    if ( v9 != -1073741443 )
      break;
    __debugbreak();
    v3 = v29;
    a3 = v30;
    if ( v5 >= 5 )
      break;
    v24 = ++v5;
  }
  return (unsigned int)v9;
}
