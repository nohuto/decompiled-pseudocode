/*
 * XREFs of KdpSearchMemory @ 0x1409B9018
 * Callers:
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x140546CDC (MmDbgCopyMemory.c)
 *     KdpQuickMoveMemory @ 0x1409BACF0 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v4; // r14d
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // edi
  char *v10; // rbx
  unsigned __int64 v11; // r10
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rcx
  _BYTE *v15; // r14
  unsigned int v16; // r13d
  char *v17; // r12
  char v19[4]; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h]
  unsigned int v22; // [rsp+3Ch] [rbp-2Dh]
  __int64 v23; // [rsp+40h] [rbp-29h]
  _DWORD v24[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h]
  unsigned __int64 v26; // [rsp+58h] [rbp-11h]
  __int64 v27; // [rsp+60h] [rbp-9h]
  _DWORD v28[4]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v29[4]; // [rsp+78h] [rbp+Fh]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = -1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v24[1] = 0;
  v20 = 0;
  v23 = v2;
  v26 = v6 + v7;
  v21 = v4;
  v19[0] = 0;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v4 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v4));
  v28[0] = 0;
  v29[0] = v5;
  v8 = 4LL;
  v29[1] = v5 << 8;
  v29[3] = v5 << 24;
  v29[2] = v5 << 16;
  if ( v4 < 5 )
    v8 = v4;
  KdpQuickMoveMemory(v28, v2, v8);
  v9 = v6 & 3;
  v28[1] = v28[0] << 8;
  v10 = (char *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  v28[2] = v28[0] << 16;
  v28[3] = v28[0] << 24;
  if ( (unsigned __int64)v10 >= v11 )
    goto LABEL_22;
  while ( (int)MmDbgCopyMemory(v10, &v20, 4u, 4u, 4u) < 0 )
  {
LABEL_18:
    v10 += 4;
    v9 = 0;
    if ( (unsigned __int64)v10 >= v26 )
      goto LABEL_22;
  }
  v12 = v4 - 4;
  v13 = v9;
  v22 = v4 - 4;
  while ( (v20 & v29[v13]) != v28[v13] )
  {
LABEL_17:
    ++v9;
    ++v13;
    if ( v9 >= 4 )
      goto LABEL_18;
  }
  v14 = v9;
  v27 = v9;
  if ( 4 - v9 >= v4 )
    goto LABEL_21;
  v15 = (_BYTE *)(v2 - v9 + 4);
  v16 = v12 + v9;
  if ( !(v12 + v9) )
    goto LABEL_21;
  v17 = &v10[v9 - v23];
  do
  {
    if ( (int)MmDbgCopyMemory(&v15[(_QWORD)v17], v19, 1u, 1u, 4u) < 0 )
      break;
    if ( v19[0] != *v15 )
      break;
    ++v15;
    --v16;
  }
  while ( v16 );
  if ( v16 )
  {
    v4 = v21;
    v2 = v23;
    v12 = v22;
    goto LABEL_17;
  }
  v14 = v27;
LABEL_21:
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = &v10[v14];
LABEL_22:
  v24[0] = 3670072;
  v25 = a1;
  return KdSendPacket(2LL, v24, 0LL, &KdpContext);
}
