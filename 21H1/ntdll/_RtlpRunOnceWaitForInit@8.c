/*
 * XREFs of _RtlpRunOnceWaitForInit@8 @ 0x4B2F28A3
 * Callers:
 *     _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320 (_RtlRunOnceBeginInitialize@12.c)
 * Callees:
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 */

signed __int32 __usercall RtlpRunOnceWaitForInit@<eax>(
        volatile signed __int32 *a1@<edx>,
        signed __int32 a2@<ecx>,
        int a3@<ebp>)
{
  signed __int32 v4; // eax
  _DWORD v6[5]; // [esp-20h] [ebp-2Ch] BYREF
  int v7; // [esp-Ch] [ebp-18h]
  int v8; // [esp-8h] [ebp-14h]
  int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp+0h] [ebp-Ch]
  void *v11; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v10 = a3;
  v11 = retaddr;
  v6[1] = 0;
  v6[2] = 0;
  v6[4] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6[3] = NtCurrentTeb()->ClientId.UniqueThread;
  do
  {
    v6[0] = a2 & 0xFFFFFFFC;
    v4 = _InterlockedCompareExchange(a1, (signed __int32)v6 + 1, a2);
    if ( v4 == a2 )
      break;
    a2 = v4;
  }
  while ( (v4 & 3) == 1 );
  if ( (a2 & 3) == 1 )
  {
    do
    {
      ZwWaitForAlertByThreadId((PVOID)a1, 0);
      a2 = *a1;
    }
    while ( (v7 & 4) == 0 );
  }
  return a2;
}
