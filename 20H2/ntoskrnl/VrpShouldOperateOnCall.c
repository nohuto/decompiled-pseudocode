/*
 * XREFs of VrpShouldOperateOnCall @ 0x1405D1760
 * Callers:
 *     VrpRegistryCallback @ 0x1405D15D0 (VrpRegistryCallback.c)
 * Callees:
 *     VrpGetContextsForNotifyInfo @ 0x1405D18D0 (VrpGetContextsForNotifyInfo.c)
 *     VRegEnabledInJob @ 0x1405D2D60 (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20[0] = 0LL;
  VrpGetContextsForNotifyInfo(a1, a2, &v18, &v19);
  v9 = v18;
  if ( v18 )
  {
    *a3 = v18;
    *a4 = *(_QWORD *)(v9 + 40);
    return 1LL;
  }
  if ( v19 )
  {
    v16 = *(_QWORD *)(v19 + 8);
    *a3 = 0LL;
    *a4 = v16;
    return 1LL;
  }
  if ( v8 == 32 )
  {
    result = VRegEnabledInJob(v20);
    if ( (_DWORD)result )
    {
      *a4 = v20[0];
      goto LABEL_6;
    }
LABEL_5:
    *a4 = 0LL;
    result = 0LL;
LABEL_6:
    *a3 = 0LL;
    return result;
  }
  if ( ((v8 - 27) & 0xFFFFFFFD) != 0 )
    goto LABEL_5;
  v11 = 0LL;
  v12 = *(_QWORD **)(*(_QWORD *)(v7 + 8) + 16LL);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 == v12 )
  {
LABEL_8:
    v14 = -1073741772;
  }
  else
  {
    while ( 1 )
    {
      v17 = v13[2] - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
      if ( !v17 )
        v17 = v13[3] - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
      if ( !v17 )
        break;
      v13 = (_QWORD *)*v13;
      if ( v13 == v12 )
        goto LABEL_8;
    }
    v11 = v13;
    v14 = 0;
  }
  v15 = v14;
  if ( v14 >= 0 )
    v15 = 0;
  if ( v15 < 0 )
    goto LABEL_5;
  *a3 = 0LL;
  result = 1LL;
  if ( v14 >= 0 )
    v4 = v11 + 6;
  *a4 = *v4;
  return result;
}
