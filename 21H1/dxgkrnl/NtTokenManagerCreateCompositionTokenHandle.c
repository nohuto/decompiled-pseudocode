/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0015F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0015478 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r12
  int LocallyUniqueId; // edi
  PVOID PoolWithTag; // rsi
  __int64 v10; // r14
  unsigned __int128 v11; // rax
  ULONG64 v12; // rcx
  size_t v13; // r14
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-98h]
  PVOID v23; // [rsp+68h] [rbp-90h]
  HANDLE Handle; // [rsp+70h] [rbp-88h] BYREF
  __int128 v25; // [rsp+78h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-70h]
  __int64 v27; // [rsp+90h] [rbp-68h]
  __int64 v28; // [rsp+98h] [rbp-60h]
  _DWORD v29[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-50h]
  __int64 v31; // [rsp+B0h] [rbp-48h]
  int v32; // [rsp+B8h] [rbp-40h]
  int v33; // [rsp+BCh] [rbp-3Ch]
  __int64 v34; // [rsp+C0h] [rbp-38h]
  __int64 v35; // [rsp+C8h] [rbp-30h]
  PVOID Object; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+108h] [rbp+10h]
  unsigned int v38; // [rsp+110h] [rbp+18h]

  v38 = a3;
  v37 = a2;
  v6 = a2;
  LocallyUniqueId = 0;
  Handle = (HANDLE)-1LL;
  PoolWithTag = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v6 || !v38 || !a4 )
    LocallyUniqueId = -1073741811;
  if ( LocallyUniqueId >= 0 )
  {
    v12 = v6;
    v11 = v6 * (unsigned __int128)0x18uLL;
    v27 = *((_QWORD *)&v11 + 1);
    v13 = 24 * v6;
    if ( is_mul_ok(v6, 0x18uLL) )
    {
      v28 = v11;
      LocallyUniqueId = 0;
    }
    else
    {
      v13 = -1LL;
      v28 = -1LL;
      LocallyUniqueId = -1073741675;
    }
    if ( LocallyUniqueId < 0 )
      goto LABEL_51;
    v11 = v6 * (unsigned __int128)0x18uLL;
    if ( !is_mul_ok(v6, 0x18uLL) )
      *(_QWORD *)&v11 = -1LL;
    if ( !(_QWORD)v11 )
      *(_QWORD *)&v11 = 1LL;
    if ( (unsigned __int64)v11 <= 0x7FFFFFFF )
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x62634D54u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      LocallyUniqueId = -1073741801;
    if ( LocallyUniqueId < 0 )
    {
LABEL_51:
      v10 = v22;
    }
    else
    {
      if ( &Src[v13] < Src || (unsigned __int64)&Src[v13] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, Src, v13);
      v12 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v12 > MmUserProbeAddress )
        a4 = (__int64 *)MmUserProbeAddress;
      v10 = *a4;
      v22 = *a4;
      LocallyUniqueId = 0;
    }
  }
  if ( LocallyUniqueId >= 0 )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v19 = WdLogNewEntry5_WdAssertion(v12, *((_QWORD *)&v11 + 1));
      *(_QWORD *)(v19 + 24) = 2219LL;
      WdLogEvent5_WdAssertion(v19);
    }
    LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38033) + 192LL))(
                        0x80000000LL,
                        &v21);
    if ( LocallyUniqueId >= 0 )
    {
      v29[1] = 0;
      v33 = 0;
      v29[0] = 48;
      v30 = 0LL;
      v32 = 0;
      v31 = 0LL;
      v34 = v21;
      v35 = 0LL;
      *(_QWORD *)&v25 = PoolWithTag;
      *((_QWORD *)&v25 + 1) = __PAIR64__(v38, v37);
      v26 = v10;
      Object = 0LL;
      LOBYTE(v14) = 1;
      LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v29, v14, 0LL, 136, 0, 0, &Object);
      if ( LocallyUniqueId >= 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
        *((_DWORD *)Object + 2) = ProcessSessionId;
        LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
        v17 = Object;
        if ( LocallyUniqueId < 0
          || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                  (struct DxgkCompositionObject *)Object,
                                  (const struct CompositionTokenInitInfo *)&v25,
                                  (struct IDxgkCompositionObject **)Object + 2),
              v17 = Object,
              LocallyUniqueId < 0) )
        {
          ObfDereferenceObject(v17);
        }
        else
        {
          LocallyUniqueId = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
        }
      }
      if ( LocallyUniqueId >= 0 )
      {
        *((_QWORD *)&v11 + 1) = a5;
        if ( a5 )
        {
          if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          **((_QWORD **)&v11 + 1) = Handle;
        }
        else
        {
          LocallyUniqueId = -1073741811;
        }
      }
    }
  }
  if ( v21 )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion(v21, *((_QWORD *)&v11 + 1));
      *(_QWORD *)(v20 + 24) = 2219LL;
      WdLogEvent5_WdAssertion(v20);
    }
    (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38033) + 312LL))();
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
