/*
 * XREFs of KdpQueryMemory @ 0x1409B471C
 * Callers:
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 */

__int64 __fastcall KdpQueryMemory(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = -1073741811;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 >= 0x7FFFFFFEFFFFLL )
    {
      LOBYTE(v4) = MmIsSessionAddress(v3);
      *(_DWORD *)(a1 + 32) = 2 - (v4 != 0);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 36) = 7;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = v1;
  LOWORD(v6) = 56;
  *((_QWORD *)&v6 + 1) = a1;
  return KdSendPacket(2LL, &v6, 0LL, &KdpContext);
}
