/*
 * XREFs of ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x180024F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024E28 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnPlayToStreamStateChanged(
        CApplicationManager *this,
        struct _PlayToStreamStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  struct CApplication *v6; // rbp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *(_QWORD *)a2;
  v6 = *(struct CApplication **)(*(_QWORD *)a2 + 256LL);
  LODWORD(a2) = *((_DWORD *)a2 + 2);
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *(_DWORD *)(v5 + 520);
  v8 = v7 - 1;
  v9 = v7 + 1;
  if ( (_DWORD)a2 )
    v9 = v8;
  *(_DWORD *)(v5 + 520) = v9;
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    CApplicationManager::UpdateActiveMediaAppForSession(this, v6, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
