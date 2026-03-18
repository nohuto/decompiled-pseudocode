/*
 * XREFs of DisplayPortEscapeSbmTransmission @ 0x1C004EE20
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004EF60 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     CallDPDdiEscape @ 0x1C004E9B8 (CallDPDdiEscape.c)
 */

__int64 __fastcall DisplayPortEscapeSbmTransmission(struct DXGADAPTER **a1, void *a2, _DWORD *a3)
{
  unsigned int v3; // eax
  signed int v7; // ebp
  __int64 v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // ebp
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r9d

  v3 = a3[2];
  v7 = v3 + 32;
  if ( v3 < a3[4] )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 220LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = operator new[](v7, 0x4B677844u, PagedPool);
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, v7);
    v12 = v10[3];
    *v10 = 517;
    v10[3] ^= (*a3 ^ v12) & 1;
    v10[4] = a3[1];
    v10[5] = a3[3];
    v10[6] = a3[4];
    memmove(v10 + 8, a3 + 7, (unsigned int)a3[3]);
    v13 = CallDPDdiEscape(a1, a2, v7, v10);
    v14 = a3[4];
    v11 = v13;
    a3[5] = v10[2];
    v15 = v10[7];
    a3[6] = v15;
    if ( v15 >= v14 )
      v15 = v14;
    memmove(a3 + 7, v10 + 8, v15);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
