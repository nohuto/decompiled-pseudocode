/*
 * XREFs of ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180272848
 * Callers:
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x1802728E0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___ @ 0x180264844 (Windows--Internal--ComTaskPool--QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___.c)
 */

__int64 __fastcall TabViewManager::OnGetUnmetTabRequirementsResult(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v5 = 4LL;
  v6 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1805CE774 > *(_DWORD *)(v6 + 4) )
  {
    Init_thread_header(&dword_1805CE774);
    if ( dword_1805CE774 == -1 )
    {
      dword_1805CE778 = SHTaskPoolGetUniqueContext();
      Init_thread_footer(&dword_1805CE774);
    }
  }
  *(_QWORD *)&v8 = a2;
  DWORD2(v8) = a3;
  return Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___(
           v6,
           v5,
           dword_1805CE778,
           &v8);
}
