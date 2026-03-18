/*
 * XREFs of KiStartDpcDelegateThread @ 0x1403C13E4
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x140A693D8 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     PsAssignThreadId @ 0x1402F3684 (PsAssignThreadId.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 */

__int64 __fastcall KiStartDpcDelegateThread(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  result = KiInitializePrcbThread((unsigned int)&v7, 0, (unsigned int)KiExecuteDpcDelegate, a4);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    result = PsAssignThreadId(v7);
    if ( (int)result >= 0 )
      *(_QWORD *)(a1 + 13112) = v6;
  }
  return result;
}
