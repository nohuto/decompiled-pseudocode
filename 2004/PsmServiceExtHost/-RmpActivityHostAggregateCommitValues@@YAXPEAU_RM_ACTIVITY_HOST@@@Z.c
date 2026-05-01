/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007A60
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800078A4 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180007C08 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007C7C (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x180007CD0 (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 First; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  int v9; // [rsp+2Ch] [rbp-44h]
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h]
  _QWORD v12[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v1 = 0LL;
  v8 = 2;
  v2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  First = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  if ( Next )
  {
    do
    {
      v12[3] = *((_QWORD *)Next + 175);
      v12[2] = *((_QWORD *)Next + 170);
      v5 = *((_QWORD *)Next + 174);
      v6 = *((_QWORD *)Next + 212);
      v12[1] = v5;
      v12[0] = v6;
      RmpCommitThresholdsAdd(
        (struct _RM_COMMIT_THRESHOLDS *)&v10,
        (struct _RM_COMMIT_THRESHOLDS *)v12,
        (struct _RM_COMMIT_THRESHOLDS *)&v10);
      Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
    }
    while ( Next );
    v2 = v11;
    v1 = v10;
  }
  *((_OWORD *)a1 + 83) = v1;
  *((_OWORD *)a1 + 84) = v2;
}
