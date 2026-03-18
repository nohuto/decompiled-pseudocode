/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C00B535C
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00067DC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00B2468 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C00B52C0 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00B66A0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8

  v5 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  v6 = v5;
  if ( v5 )
  {
    v8 = DirectComposition::CEvent::Initialize(v5, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7, v9);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
