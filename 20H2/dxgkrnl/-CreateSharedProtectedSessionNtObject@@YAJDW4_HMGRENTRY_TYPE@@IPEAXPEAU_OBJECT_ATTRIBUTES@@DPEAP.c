/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0275C8C
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C011A590 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C02766B4 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0046648 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C0046678 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int v7; // r15d
  __int64 v8; // rdi
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v13; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  DXGPROTECTEDSESSION *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  PVOID v35; // rcx
  _BYTE v37[8]; // [rsp+50h] [rbp-10h] BYREF
  char v38; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v7 = a2;
  v8 = a3;
  v9 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_22;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v37, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v15 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)Current + 64) )
    goto LABEL_9;
  v16 = *((_QWORD *)Current + 30);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v18 = v17 & 0x1F;
  if ( v7 != (_DWORD)v18 )
  {
    v19 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v18);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_9:
    v20 = 0LL;
    goto LABEL_10;
  }
  v20 = *(DXGPROTECTEDSESSION **)(v16 + 16LL * (unsigned int)v15);
LABEL_10:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    LOBYTE(v24) = a6;
    LOBYTE(v22) = v9;
    v27 = ObCreateObject(v22, g_pDxgkSharedProtectedSessionObjectType, a5, v24, 0LL, 8, 0, 0, &Object);
    v8 = v27;
    if ( v27 >= 0 )
    {
      v34 = Object;
      DXGPROTECTEDSESSION::AddReference(v20, 0LL);
      *v34 = v20;
    }
    else
    {
      if ( Object )
      {
        v31 = WdLogNewEntry5_WdAssertion(v29, v28);
        *(_QWORD *)(v31 + 24) = 509LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v32 + 24) = Current;
      *(_QWORD *)(v32 + 32) = v8;
      WdLogEvent5_WdWarning(v32);
    }
    if ( v38 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v33);
    if ( (int)v8 >= 0 )
    {
      v35 = Object;
      goto LABEL_25;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    if ( v38 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v26);
  }
LABEL_22:
  v35 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v35 = 0LL;
  }
LABEL_25:
  *a7 = v35;
  return (unsigned int)v8;
}
