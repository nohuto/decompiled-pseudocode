/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000BED8
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, int a2, void *a3)
{
  CPortClient *result; // rax

  *((_DWORD *)this + 7) = a2;
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  result = this;
  *((_QWORD *)this + 5) = a3;
  return result;
}
