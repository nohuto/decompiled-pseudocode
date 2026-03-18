/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C031B698
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C031C0B0 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C005580C (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C00558CC (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  struct DXGPROCESS *v7; // rdi
  int v8; // r15d
  char v9; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  DXGPROTECTEDSESSION *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r9
  struct DXGPROCESS *v19; // rdx
  int v20; // eax
  PVOID v21; // rcx
  _QWORD *v22; // rbx
  char v24[8]; // [rsp+50h] [rbp-10h] BYREF
  char v25; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v7 = (struct DXGPROCESS *)(unsigned int)a3;
  Object = 0LL;
  v8 = a2;
  v9 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    v21 = Object;
    if ( Object )
    {
      ObfDereferenceObject(Object);
      v21 = 0LL;
    }
    goto LABEL_24;
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v24, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v14 = *((_QWORD *)Current + 35);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( v8 != (*(_DWORD *)(v14 + 16 * v13 + 8) & 0x1F) )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(DXGPROTECTEDSESSION **)(v14 + 16LL * (unsigned int)v13);
LABEL_10:
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v19 = v7;
    v11 = -1073741811LL;
LABEL_17:
    WdLogSingleEntry2(3LL, v19, v11);
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    goto LABEL_19;
  }
  LOBYTE(v18) = a6;
  LOBYTE(v17) = v9;
  v20 = ObCreateObject(v17, g_pDxgkSharedProtectedSessionObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
  v11 = v20;
  if ( v20 < 0 )
  {
    if ( Object )
    {
      WdLogSingleEntry1(1LL, 554LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 554LL, 0LL, 0LL, 0LL, 0LL);
    }
    v19 = Current;
    goto LABEL_17;
  }
  v22 = Object;
  DXGPROTECTEDSESSION::AddReference(v16, 0);
  *v22 = v16;
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  v21 = Object;
LABEL_24:
  *a7 = v21;
  return (unsigned int)v11;
}
