/*
 * XREFs of ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C011BCDC
 * Callers:
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C011BB64 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029AAC8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C003E87C (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceHelper(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        struct DXGSHAREDRESOURCE *a4,
        unsigned __int8 a5,
        int a6)
{
  char v8; // r14
  __int64 v10; // rbp
  PVOID v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 *v14; // rbx
  DXGPROCESSSHAREDACCESS *v15; // rcx
  __int64 *i; // rax
  char v17; // r8
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  DXGPROCESSSHAREDACCESS *v33; // rdx
  DXGPROCESSSHAREDACCESS **v34; // r8
  _BYTE v35[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[17]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v25 + 24) = 5422LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)a4 + 19);
    if ( v10 && (!a6 || *(PERESOURCE **)(v10 + 72) == this) )
    {
      v11 = 0LL;
      v12 = 0;
      if ( !v8 )
      {
        Object = 0LL;
        v27 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v11 = Object;
        v12 = v27;
        if ( v27 < 0 )
        {
          v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v31 + 24) = a3;
          WdLogEvent5_WdWarning(v31);
          return v12;
        }
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(v10 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
      v14 = (__int64 *)(v10 + 48);
      v15 = 0LL;
      for ( i = *(__int64 **)(v10 + 48); i != v14; i = (__int64 *)*i )
      {
        v17 = *((_BYTE *)i + 16);
        if ( v8 )
        {
          if ( v17 )
            goto LABEL_14;
        }
        else if ( !v17 && (PVOID)i[3] == v11 )
        {
LABEL_14:
          v15 = (DXGPROCESSSHAREDACCESS *)(i - 1);
          break;
        }
      }
      if ( a5 )
      {
        if ( v15 )
        {
LABEL_20:
          if ( v11 )
            ObfDereferenceObject(v11);
          if ( v35[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v13);
          return v12;
        }
        v18 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
        if ( !v18 )
        {
          v32 = WdLogNewEntry5_WdLowResource(v19, v13, v20, v21);
          v12 = -1073741801;
          *(_QWORD *)(v32 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v32);
          goto LABEL_20;
        }
        v18[24] = v8;
        *((_QWORD *)v18 + 4) = v11;
        v22 = *v14;
        v23 = v18 + 8;
        if ( *(__int64 **)(*v14 + 8) == v14 )
        {
          *v23 = v22;
          v11 = 0LL;
          v23[1] = v14;
          *(_QWORD *)(v22 + 8) = v23;
          *v14 = (__int64)v23;
          goto LABEL_20;
        }
      }
      else
      {
        if ( !v15 )
          goto LABEL_20;
        v33 = (DXGPROCESSSHAREDACCESS *)*((_QWORD *)v15 + 1);
        if ( *((DXGPROCESSSHAREDACCESS **)v33 + 1) == (DXGPROCESSSHAREDACCESS *)((char *)v15 + 8) )
        {
          v34 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v15 + 2);
          if ( *v34 == (DXGPROCESSSHAREDACCESS *)((char *)v15 + 8) )
          {
            *v34 = v33;
            *((_QWORD *)v33 + 1) = v34;
            DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v15);
            goto LABEL_20;
          }
        }
      }
      __fastfail(3u);
    }
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v26[3] = this;
    v26[4] = a4;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v26[4] = 0LL;
    v26[3] = this;
  }
  v26[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
  return 3221225485LL;
}
