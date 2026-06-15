/*
 * XREFs of ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800E26E4
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800E26C0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062470 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1800E29E0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800E2A3C (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  signed int v7; // eax
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v14[240]; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+23Ch] [rbp+134h]

  pv = 0LL;
  v12 = 0LL;
  if ( (byte_1801A0981 & 2) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(this, &EVT_VOLUME_LIMIT_CHANGED_ENTER, this);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), &v10);
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      v4 = -2147467259;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v11);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(
               *((_QWORD *)this + 4),
               &v12);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 64LL))(v12, &pv);
          if ( v4 >= 0 )
          {
            v5 = -1LL;
            do
              ++v5;
            while ( *((_WORD *)pv + v5) );
            v15 = v11;
            v13 = 2 * v5 + 2;
            v4 = StringCbCopyW((char *)v14, 0x1E0uLL, (char *)pv);
            if ( v4 >= 0 )
            {
              if ( (byte_1801A0981 & 2) != 0 )
                McTemplateU0p_EtwEventWriteTransfer(v3, &EVT_VOLUME_LIMIT_PUBLISH_WNF_AVLC_STATE, this);
              v6 = RtlPublishWnfStateData(WNF_AVLC_DRIVER_REQUEST, 0LL, &v13, 488LL, 0LL);
              if ( v6 < 0 )
              {
                v7 = RtlNtStatusToDosError(v6);
                v4 = v7;
                if ( v7 > 0 )
                  v4 = (unsigned __int16)v7 | 0x80070000;
              }
            }
          }
        }
      }
    }
  }
  if ( (byte_1801A0981 & 2) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v3, v2, this, (unsigned int)v4);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v4;
}
