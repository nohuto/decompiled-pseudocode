/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C001DC5C
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C001C30C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C001DB28 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C001DC00 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00A3AEC (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rdi
  unsigned int v7; // edx
  int v8; // ebx

  v5 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL);
  v6 = v5;
  if ( v5 )
  {
    v8 = DirectComposition::CEvent::Initialize(v5, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
