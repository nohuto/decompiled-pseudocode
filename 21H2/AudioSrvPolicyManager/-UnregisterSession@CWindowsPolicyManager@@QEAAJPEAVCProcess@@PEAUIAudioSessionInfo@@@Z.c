/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180007220
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180014EB0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800071E0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180015454 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B65C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        struct _RTL_CRITICAL_SECTION *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CWindowsPolicyManager *v5; // rbp
  CApplicationManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  _QWORD *v10; // rdi
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v16; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+18h] BYREF

  lpCriticalSection = this;
  v5 = g_PolicyManager;
  CWindowsPolicyManager::Lock((__int64)g_PolicyManager, &lpCriticalSection);
  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = v7;
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v6, a2);
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = *((_QWORD *)v5 + 5);
  v9 = (struct _RTL_CRITICAL_SECTION *)(v8 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
  v10 = (_QWORD *)(v8 + 64);
  v11 = 0LL;
  v12 = (_QWORD *)*v10;
  if ( *v10 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)*v10;
      if ( (struct IAudioSessionInfo *)v12[1] == a3 )
      {
        if ( v12 + 1 != &v18 )
        {
          v12 = (_QWORD *)*v10;
          if ( v13 )
          {
            v16 = (_QWORD *)*v10;
            v12 = (_QWORD *)*v13;
            *v10 = *v13;
            operator delete(v16, (const struct std::nothrow_t *)0x10);
          }
          goto LABEL_8;
        }
        v11 = (_QWORD **)v10;
      }
      v12 = (_QWORD *)*v12;
      v10 = (_QWORD *)*v10;
LABEL_8:
      if ( !v12 )
      {
        if ( v11 )
        {
          v14 = *v11;
          if ( *v11 )
          {
            *v11 = (_QWORD *)*v14;
            operator delete(v14, (const struct std::nothrow_t *)0x10);
          }
        }
        break;
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
