/*
 * XREFs of ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03B5D90
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x1C03B6940 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0011C8C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1C006B84C (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::AddHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  const unsigned __int16 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _KTHREAD **v16; // [rsp+58h] [rbp+10h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v16, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  v4 = a2->Length + 2;
  v6 = operator new[](0x28uLL, 0x4D677844u, 256LL, v5);
  v7 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(2LL);
    v7 = 0LL;
LABEL_10:
    v13 = -1073741801;
    if ( v7 )
      USB4_HOST_ROUTER::`scalar deleting destructor'((USB4_HOST_ROUTER *)v7);
    goto LABEL_12;
  }
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_WORD *)(v6 + 18) = v4;
  v8 = 2LL * v4;
  if ( !is_mul_ok(v4, 2uLL) )
    v8 = -1LL;
  *(_QWORD *)(v7 + 24) = operator new[](v8, 0x4D677844u, 256LL, -1LL);
  *(_WORD *)(v7 + 16) = 0;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_10;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)(v7 + 16), a2);
  v9 = *(unsigned __int16 *)(v7 + 18);
  v10 = *(const unsigned __int16 **)(v7 + 24);
  v15 = 0LL;
  RtlStringCchLengthW(v10, v9, &v15);
  *(_DWORD *)(v7 + 32) = _wtoi((const wchar_t *)(*(_QWORD *)(v7 + 24) + 2 * (v15 - 1)));
  v11 = (__int64 *)((char *)this + 56);
  v12 = *((_QWORD *)this + 7);
  if ( *(USB4_HOSTROUTER_MGR **)(v12 + 8) != (USB4_HOSTROUTER_MGR *)((char *)this + 56) )
    __fastfail(3u);
  *(_QWORD *)v7 = v12;
  v13 = 0;
  *(_QWORD *)(v7 + 8) = v11;
  *(_QWORD *)(v12 + 8) = v7;
  *v11 = v7;
LABEL_12:
  MUTEX_LOCK::~MUTEX_LOCK(&v16);
  return v13;
}
