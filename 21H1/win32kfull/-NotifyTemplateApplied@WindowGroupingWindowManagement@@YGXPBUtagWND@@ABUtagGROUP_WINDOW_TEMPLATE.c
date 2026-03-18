/*
 * XREFs of ?NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x19F31C
 * Callers:
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall WindowGroupingWindowManagement::NotifyTemplateApplied(_DWORD *a1, const void *a2)
{
  int v4; // eax
  int v5; // ecx
  _BYTE v6[8]; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v7[2]; // [esp+14h] [ebp-34h] BYREF
  _BYTE v8[40]; // [esp+1Ch] [ebp-2Ch] BYREF

  v4 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v4 )
    v5 = ***(_DWORD ***)(v4 + 4);
  else
    v5 = -1;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop((void *)v5) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    if ( a1[45] )
    {
      v7[0] = *a1;
      v7[1] = 10;
      qmemcpy(v8, a2, sizeof(v8));
      anonymous_namespace_::NotifyIAMWindowManagementEvent(v7);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  }
}
