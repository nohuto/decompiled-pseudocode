/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x1801D74BC
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D7C64 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  int v8; // ecx
  int v10; // r10d
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // r8d
  int v23; // r8d
  int v24; // ecx
  int v25; // r9d
  int v26; // eax
  int v27; // ecx
  __int64 result; // rax
  __int64 v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v31; // [rsp+38h] [rbp+10h]

  v31 = a2;
  v8 = a6;
  if ( a6 == 1 )
  {
    v8 = 0;
    v10 = HIDWORD(a2) - a4 / 2;
  }
  else
  {
    v10 = HIDWORD(a2);
  }
  if ( v8 )
  {
    if ( v8 != 2 )
    {
      v29 = 850LL;
      goto LABEL_48;
    }
    v16 = a1[3];
    v17 = v16;
    v15 = a1[1];
    if ( v10 < v16 )
      v17 = v10;
    if ( v17 - a4 > v15 )
    {
      v18 = a1[3];
      if ( v10 < v16 )
        v18 = v10;
      v15 = v18 - a4;
    }
    v13 = v15 + a4;
    if ( v15 + a4 >= v16 )
      v13 = a1[3];
  }
  else
  {
    v11 = a1[1];
    v12 = v11;
    v13 = a1[3];
    if ( v10 > v11 )
      v12 = v10;
    if ( a4 + v12 < v13 )
    {
      v14 = a1[1];
      if ( v10 > v11 )
        v14 = v10;
      v13 = a4 + v14;
    }
    v15 = v13 - a4;
    if ( v13 - a4 <= v11 )
      v15 = a1[1];
  }
  a7[3] = v13;
  a7[1] = v15;
  v19 = a5;
  if ( a5 == 1 )
  {
    v19 = 0;
    v20 = a3 / -2 + v31;
  }
  else
  {
    v20 = v31;
  }
  if ( !v19 )
  {
    v21 = *a1;
    v22 = a1[2];
    if ( v20 > *a1 )
      v21 = v20;
    if ( a3 + v21 < v22 )
    {
      v23 = *a1;
      if ( v20 > *a1 )
        v23 = v20;
      v22 = a3 + v23;
    }
    v24 = v22 - a3;
    if ( v22 - a3 <= *a1 )
      v24 = *a1;
LABEL_45:
    a7[2] = v22;
    result = 0LL;
    *a7 = v24;
    return result;
  }
  if ( v19 == 2 )
  {
    v25 = a1[2];
    v26 = v25;
    v24 = *a1;
    if ( v20 < v25 )
      v26 = v20;
    if ( v26 - a3 > v24 )
    {
      v27 = a1[2];
      if ( v20 < v25 )
        v27 = v20;
      v24 = v27 - a3;
    }
    v22 = v24 + a3;
    if ( v24 + a3 >= v25 )
      v22 = a1[2];
    goto LABEL_45;
  }
  v29 = 872LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
