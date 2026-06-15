/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x1800178A0
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180017870 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180017AE0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned int v6; // r15d
  GUID *v7; // rax
  GUID *v8; // r14
  DWORD pid; // ebx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // r9d
  _QWORD *v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  GUID fmtid; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v7 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    fmtid = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v7, a2, 4LL);
    *(_QWORD *)&v8->Data1 = &COnDevicePropertyChangedWorkItem::`vftable';
    v8[2] = fmtid;
    v8[3].Data1 = pid;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_29;
  if ( !*(_DWORD *)(*(_QWORD *)v8->Data4 - 16LL) )
  {
    (**(void (__fastcall ***)(void *, __int64))&v8->Data1)(v8, 1LL);
LABEL_29:
    v6 = -2147024882;
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 0x6D7u, -2147024882);
    return v6;
  }
  if ( !*((_QWORD *)this + 25) )
  {
    (**(void (__fastcall ***)(void *, __int64))&v8->Data1)(v8, 1LL);
    return v6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v6 = 0;
  v10 = *((_QWORD *)this + 20);
  if ( !*((_QWORD *)this + 23) )
  {
    v11 = *((unsigned int *)this + 48);
    if ( *((_DWORD *)this + 48) )
    {
      if ( v11 == 10 )
        v12 = 0x1999999999999999LL;
      else
        v12 = 0xFFFFFFFFFFFFFFFFuLL / v11;
      if ( v12 < 0x18 )
        goto LABEL_26;
      v11 *= 24LL;
    }
    if ( ~v11 >= 8 )
    {
      v13 = malloc(v11 + 8);
      if ( v13 )
      {
        *v13 = *((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v13;
        v14 = *((_DWORD *)this + 48) - 1;
        v15 = &v13[3 * (unsigned int)v14 + 1];
        while ( v14 >= 0 )
        {
          *v15 = *((_QWORD *)this + 23);
          *((_QWORD *)this + 23) = v15;
          v15 -= 3;
          --v14;
        }
        goto LABEL_17;
      }
    }
LABEL_26:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_17:
  v16 = (__int64 *)*((_QWORD *)this + 23);
  v17 = *v16;
  v16[2] = (__int64)v8;
  *((_QWORD *)this + 23) = v17;
  v16[1] = v10;
  *v16 = 0LL;
  ++*((_QWORD *)this + 21);
  v18 = (__int64 **)*((_QWORD *)this + 20);
  if ( v18 )
    *v18 = v16;
  else
    *((_QWORD *)this + 19) = v16;
  *((_QWORD *)this + 20) = v16;
  if ( this != (CAudioSrv *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)this + 25));
  return v6;
}
