/*
 * XREFs of NdisPDStartup @ 0x1C007E420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C011D0F0 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C011D290 (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 */

__int64 __fastcall NdisPDStartup(_BYTE *a1, __int64 a2, __int64 a3, __int64 **a4, _QWORD *a5)
{
  char v6; // r14
  unsigned int v10; // edi
  __int64 *PoolWithTag; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 *i; // rax
  ULONG ClearBitsAndSet; // eax
  __int64 v16; // rax
  __int64 **v17; // rdx
  __int64 v19; // [rsp+38h] [rbp-40h]
  KLockHolder v20; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x13u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      a2,
      a3);
  *a4 = 0LL;
  if ( (unsigned __int8)(*a1 - 3) <= 1u )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6341444Eu);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[10] = 0LL;
      PoolWithTag[11] = 0LL;
      PoolWithTag[12] = 0LL;
      *((_WORD *)PoolWithTag + 52) = 0;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      v13 = PoolWithTag + 2;
      v13[1] = v13;
      *v13 = v13;
      v12[5] = (__int64)(v12 + 4);
      v12[4] = (__int64)(v12 + 4);
      v12[7] = (__int64)(v12 + 6);
      v12[6] = (__int64)(v12 + 6);
      v12[9] = (__int64)(v12 + 8);
      v12[8] = (__int64)(v12 + 8);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      if ( ndisPDReferenceClientDriver(a1) )
      {
        v12[10] = (__int64)a1;
        v6 = 1;
        v12[11] = a2;
        v12[12] = a3;
        *a4 = v12;
        *a5 = &unk_1C00C8980;
        v20.m_Lock = (KPushLockBase *)qword_1C00E44F8;
        v20.m_State = Unlocked;
        v20.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v20);
        for ( i = *(__int64 **)(qword_1C00E44F8 + 8); i != (__int64 *)(qword_1C00E44F8 + 8); i = (__int64 *)*i )
        {
          if ( (_BYTE *)i[10] == a1 )
          {
            v10 = -1073740008;
            goto LABEL_19;
          }
        }
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(qword_1C00E44F8 + 24), 1u, 0);
        if ( ClearBitsAndSet == -1 )
        {
          v10 = -1073741618;
LABEL_19:
          KLockHolder::~KLockHolder(&v20);
          goto LABEL_23;
        }
        *((_WORD *)v12 + 52) = ClearBitsAndSet;
        v16 = qword_1C00E44F8 + 8;
        v17 = *(__int64 ***)(qword_1C00E44F8 + 16);
        if ( *v17 != (__int64 *)(qword_1C00E44F8 + 8) )
          __fastfail(3u);
        *v12 = v16;
        v12[1] = (__int64)v17;
        *v17 = v12;
        *(_QWORD *)(v16 + 8) = v12;
        KLockHolder::~KLockHolder(&v20);
        v10 = 0;
        v12 = 0LL;
        v6 = 0;
      }
      else
      {
        v10 = -1073741436;
      }
LABEL_23:
      if ( v12 )
        ExFreePoolWithTag(v12, 0x6341444Eu);
      if ( v6 )
        ndisPDDereferenceClientDriver(a1);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741788;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x14u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      (char)*a4,
      v19);
  }
  return v10;
}
