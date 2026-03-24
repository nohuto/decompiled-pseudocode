/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0276CAC
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1C0277944 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040BB4 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040ED0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bp
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  PVOID v20; // rcx
  DXGKEYEDMUTEX *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  _BYTE v33[32]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  v7 = a1;
  v8 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v12 = Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  v17 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)v12 + 64) )
    goto LABEL_9;
  v16 = v12[30];
  v15 = ((unsigned int)v8 >> 25) & 0x60;
  v14 = *((unsigned int *)v16 + 4 * v17 + 2);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*((_BYTE *)v16 + 16 * v17 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v14 &= 0x1Fu;
  if ( (_BYTE)v14 != 9 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v18 + 24) = 316LL;
    WdLogEvent5_WdError(v18);
LABEL_9:
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v19 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
LABEL_10:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    goto LABEL_11;
  }
  v22 = (DXGKEYEDMUTEX *)*((_QWORD *)v16 + 2 * (unsigned int)v17);
  if ( !v22 )
    goto LABEL_9;
  if ( (*((_DWORD *)v22 + 41) & 1) == 0 )
  {
    v23 = WdLogNewEntry5_WdError(v15, v14);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v23 + 24) = v22;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v22, v14);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  LOBYTE(v24) = 1;
  LOBYTE(v25) = v7;
  v26 = ObCreateObject(v25, g_pDxgkSharedKeyedMutexObjectType, a5, v24, 0LL, 8, 0, 0, &Object);
  v8 = v26;
  if ( v26 >= 0 )
  {
    *(_QWORD *)Object = v22;
  }
  else
  {
    if ( Object )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v30 + 24) = 271LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v31 + 24) = v12;
    *(_QWORD *)(v31 + 32) = v8;
    WdLogEvent5_WdWarning(v31);
    DXGKEYEDMUTEX::ReleaseReference(v22, v32);
  }
  if ( (int)v8 >= 0 )
  {
    v20 = Object;
    goto LABEL_13;
  }
LABEL_11:
  v20 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v20 = 0LL;
  }
LABEL_13:
  *a7 = v20;
  return (unsigned int)v8;
}
