/*
 * XREFs of ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C11A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801C01A4 (-DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801C1A20 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewDestroyed(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CVirtualTouchpadExperienceManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVirtualTouchpadExperienceManager *)((char *)this - 56);
  if ( *((_BYTE *)this + 260) )
  {
    *((_BYTE *)this + 260) = 0;
    CVirtualTouchpadExperienceManager::SaveFramePosition((CVirtualTouchpadExperienceManager *)((char *)this - 56));
  }
  v3 = CVirtualTouchpadExperienceManager::DestroyFrame(v2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
