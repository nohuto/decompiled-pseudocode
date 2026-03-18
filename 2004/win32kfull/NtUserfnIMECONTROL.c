/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C02058C0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E38E0 (ProbeAndCaptureSoftKbdData.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v10; // rsi
  __int128 *v11; // rax
  __int64 v12; // rbx
  __int128 v14; // [rsp+48h] [rbp-110h] BYREF
  __int64 v15; // [rsp+58h] [rbp-100h]
  __int128 v16; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-E0h]
  int v18; // [rsp+80h] [rbp-D8h]
  __int128 v19; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+98h] [rbp-C0h]
  _OWORD v21[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  memset(v21, 0, 0x5CuLL);
  v14 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_33;
  switch ( (_DWORD)a3 )
  {
    case 7:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      a4[1] = a4[1];
      break;
    case 8:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v19 = *a4;
      v20 = a4[1];
      a4 = &v19;
      break;
    case 9:
      goto LABEL_24;
    case 0xA:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v21[0] = *a4;
      v21[1] = a4[1];
      v21[2] = a4[2];
      v21[3] = a4[3];
      v21[4] = a4[4];
      *(_QWORD *)&v21[5] = *((_QWORD *)a4 + 10);
      DWORD2(v21[5]) = *((_DWORD *)a4 + 22);
      a4 = v21;
      break;
    case 0xB:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      *((_QWORD *)a4 + 2) = *((_QWORD *)a4 + 2);
      *((_DWORD *)a4 + 6) = *((_DWORD *)a4 + 6);
      break;
    case 0xC:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v16 = *a4;
      v17 = *((_QWORD *)a4 + 2);
      v18 = *((_DWORD *)a4 + 6);
      a4 = &v16;
      break;
    case 0x11:
LABEL_24:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      a4[1] = a4[1];
      a4[2] = a4[2];
      a4[3] = a4[3];
      a4[4] = a4[4];
      *((_QWORD *)a4 + 10) = *((_QWORD *)a4 + 10);
      *((_DWORD *)a4 + 22) = *((_DWORD *)a4 + 22);
      break;
    case 0x18:
      v11 = (__int128 *)ProbeAndCaptureSoftKbdData((char *)a4);
      v10 = v11;
      if ( !v11 )
        return 0LL;
      PushW32ThreadLock((__int64)v11, &v14, (__int64)Win32FreePool);
      a4 = v10;
      break;
  }
LABEL_33:
  v12 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          a4,
          a5);
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
  return v12;
}
