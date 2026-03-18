/*
 * XREFs of sub_1C000F090 @ 0x1C000F090
 * Callers:
 *     sub_1C001B9C0 @ 0x1C001B9C0 (sub_1C001B9C0.c)
 * Callees:
 *     sub_1C00033C0 @ 0x1C00033C0 (sub_1C00033C0.c)
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     sub_1C00167EC @ 0x1C00167EC (sub_1C00167EC.c)
 *     sub_1C0016910 @ 0x1C0016910 (sub_1C0016910.c)
 *     sub_1C00169C4 @ 0x1C00169C4 (sub_1C00169C4.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C001BAFC @ 0x1C001BAFC (sub_1C001BAFC.c)
 *     sub_1C001C03C @ 0x1C001C03C (sub_1C001C03C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00342BC @ 0x1C00342BC (sub_1C00342BC.c)
 *     sub_1C00349E0 @ 0x1C00349E0 (sub_1C00349E0.c)
 *     sub_1C0038420 @ 0x1C0038420 (sub_1C0038420.c)
 *     sub_1C0038B7C @ 0x1C0038B7C (sub_1C0038B7C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

int __fastcall sub_1C000F090(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // edi
  struct _KEVENT *v6; // r14
  struct _KEVENT *v7; // rsi
  int v8; // r9d
  char *PoolWithTag; // rax
  __int64 v10; // rdi
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v13; // si
  unsigned int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // rdx
  char v17; // r15
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // r9d
  __int16 v21; // ax
  __int16 v22; // r9
  _UNKNOWN **v23; // rax
  int v24; // r9d
  int v25; // r9d
  int v26; // esi
  __int64 v27; // r12
  int v28; // eax
  char v29; // r9
  __int64 v30; // rdx
  __int16 v31; // r9
  int v32; // r9d
  int v33; // r9d
  __int64 v34; // rdx
  __int16 v35; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-99h]
  __int64 v38; // [rsp+28h] [rbp-91h]
  int *v39; // [rsp+30h] [rbp-89h]
  __int64 v40; // [rsp+38h] [rbp-81h]
  _WORD *v41; // [rsp+40h] [rbp-79h]
  int v42; // [rsp+48h] [rbp-71h]
  __int64 v43; // [rsp+50h] [rbp-69h]
  int v44; // [rsp+60h] [rbp-59h] BYREF
  _WORD v45[2]; // [rsp+64h] [rbp-55h] BYREF
  int v46; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-4Dh]
  unsigned int v48; // [rsp+70h] [rbp-49h] BYREF
  __int64 v49; // [rsp+78h] [rbp-41h] BYREF
  __int64 v50; // [rsp+80h] [rbp-39h]
  int v51; // [rsp+88h] [rbp-31h]
  __int64 v52; // [rsp+90h] [rbp-29h]
  int v53; // [rsp+98h] [rbp-21h]
  __int16 v54; // [rsp+9Ch] [rbp-1Dh]
  __int16 v55; // [rsp+9Eh] [rbp-1Bh]
  __int16 v56; // [rsp+A0h] [rbp-19h]
  __int16 v57; // [rsp+A2h] [rbp-17h]
  _OWORD v58[2]; // [rsp+A8h] [rbp-11h] BYREF
  int v59; // [rsp+C8h] [rbp+Fh]

  v3 = a2;
  v47 = a2;
  v4 = a3;
  v46 = 0;
  v50 = a3;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 36, (__int64)"FKh&", a2);
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1769107799, v4, v3);
  v6 = (struct _KEVENT *)sub_1C000F050((__int64)DeviceObject);
  v7 = (struct _KEVENT *)sub_1C000F050((__int64)DeviceObject);
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  sub_1C000FD80((_DWORD)DeviceObject, 0x10000, 1212771939, 0, v7[142].Header.Signalling);
  if ( v7[142].Header.Signalling == (_BYTE)v8 )
  {
    KeSetEvent(v7 + 139, 0, 0);
    v10 = 0LL;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, (unsigned int)(v8 + 40), 0x42554855u);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_QWORD *)PoolWithTag + 4) = 826438515LL;
      *(_DWORD *)PoolWithTag = 1215918946;
      *((_QWORD *)PoolWithTag + 3) = DeviceObject;
      v11 = (struct _LIST_ENTRY *)(PoolWithTag + 8);
      Blink = v7[129].Header.WaitListHead.Blink;
      if ( Blink->Flink != &v7[129].Header.WaitListHead )
        __fastfail(3u);
      v11->Flink = &v7[129].Header.WaitListHead;
      v11->Blink = Blink;
      Blink->Flink = v11;
      v7[129].Header.WaitListHead.Blink = v11;
    }
    else
    {
      ++v7[130].Header.LockNV;
      v10 = 1936941672LL;
    }
    KeSetEvent(v7 + 139, 0, 0);
  }
  _InterlockedIncrement(&v6[114].Header.Lock);
  v13 = (unsigned __int8)v3;
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1769107831, (unsigned __int8)v3, 0LL);
  if ( (_BYTE)v3 )
  {
    v52 = sub_1C0016CA0(DeviceObject, (unsigned __int8)v3);
    if ( v52 )
    {
      v45[0] = 0;
      v49 = 0LL;
      v14 = sub_1C00167EC(DeviceObject, (unsigned __int8)v3, v45, &v46);
      v15 = (int)v14;
      sub_1C000FD80((_DWORD)DeviceObject, 4, 1364550504, v13, (int)v14);
      if ( (v14 & 0xC0000000) != 0xC0000000 )
      {
        v17 = v47;
        v48 = v47;
        memset(v58, 0, sizeof(v58));
        v59 = 0;
        if ( dword_1C006B650 )
        {
          v18 = sub_1C000F050((__int64)DeviceObject);
          v53 = v18[1298];
          v54 = *((_WORD *)v18 + 2598);
          v19 = v18[1300];
          v55 = v19;
          v51 = v19;
          v56 = *((_WORD *)v18 + 2614);
          v57 = *((_WORD *)v18 + 2615);
          sub_1C001BAFC(v18, v58);
          v43 = 0LL;
          v42 = 2;
          v41 = v45;
          v40 = 4LL;
          v39 = (int *)&v48;
          v38 = 36LL;
          Timeout = (PLARGE_INTEGER)v58;
          sub_1C00125E0(&stru_1C0061FD8, 0LL);
        }
        if ( !v45[0] )
          goto LABEL_19;
        v14 = sub_1C001C03C(DeviceObject, v13, v45, &v46, Timeout, v38, v39, v40, v41, v42, v43);
        v15 = (int)v14;
        sub_1C000FD80((_DWORD)DeviceObject, 4, 1097033831, v13, (int)v14);
        if ( (v14 & 0xC0000000) != 0xC0000000 )
        {
          v21 = v45[0];
          if ( (v45[0] & 1) != 0 )
          {
            sub_1C000FD80((_DWORD)DeviceObject, 4, 1112425259, v20, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v52 + 404));
            v21 = v45[0];
          }
          LOWORD(v49) = v21;
          sub_1C0016910(DeviceObject, v50, v13);
          sub_1C00169C4(DeviceObject, v13, v49, v50);
          sub_1C000FD80((_DWORD)DeviceObject, 4, 1365469287, v13, (__int64)&v49);
          v17 = v47;
LABEL_19:
          sub_1C0003610((__int64)DeviceObject, v16, (_QWORD *)v10);
          _InterlockedDecrement(&v6[114].Header.Lock);
          sub_1C00033C0(DeviceObject);
          sub_1C000FD80((_DWORD)DeviceObject, 4, 1769422385, 0, v6[114].Header.LockNV);
          v23 = &off_1C006B000;
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) != v22 )
            LODWORD(v23) = sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 37, (__int64)"FKh&", v17);
          return (int)v23;
        }
      }
      KeSetEvent(v6 + 112, 0, 0);
      if ( (unsigned __int8)sub_1C001CEB4(v14) )
      {
        sub_1C000FD80((_DWORD)DeviceObject, 4, 1769436977, 0, v15);
        sub_1C00349E0(DeviceObject, v13, v50);
        sub_1C00342BC(DeviceObject, v13, v50);
      }
      else
      {
        sub_1C000FD80((_DWORD)DeviceObject, 4, 1769436978, 0, v15);
        sub_1C004A608((_DWORD)DeviceObject, v13, 1, v25, v25, v14, v46, (__int64)aBusC, 3213, 1);
      }
      LOBYTE(v3) = v47;
    }
    else
    {
      sub_1C000FD80((_DWORD)DeviceObject, 4, 1769437016, 0, -1073741811LL);
      sub_1C004A608(
        (_DWORD)DeviceObject,
        (unsigned __int8)v3,
        v24 + 1,
        v24,
        0,
        -1073741811,
        0,
        (__int64)aBusC,
        3118,
        v24);
      KeSetEvent(v6 + 112, 0, 0);
    }
    goto LABEL_56;
  }
  v44 = 0;
  v26 = sub_1C0038B7C(DeviceObject, &v44, &v46);
  v27 = v26;
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1364551795, 0, v26);
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1364551779, HIWORD(v44), (unsigned __int16)v44);
  if ( v26 < 0 )
    goto LABEL_48;
  v28 = 100;
  if ( (v44 & 1) == 0 )
    v28 = 500;
  v6[127].Header.LockNV = v28;
  if ( (v44 & 0x10000) != 0 )
    LODWORD(v6[126].Header.WaitListHead.Flink) = v28;
  v26 = sub_1C0038420(DeviceObject, &v44, &v46);
  v27 = v26;
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1095263080, 0, v26);
  if ( v26 < 0 || (v44 & 2) != 0 || BYTE1(v6[125].Header.WaitListHead.Flink) == v29 && (v44 & 0x20000) != 0 )
  {
LABEL_48:
    KeSetEvent(v6 + 112, 0, 0);
    if ( (v44 & 2) != 0 || !BYTE1(v6[125].Header.WaitListHead.Flink) && (v44 & 0x20000) != 0 )
    {
      sub_1C000FD80((_DWORD)DeviceObject, 4, 1749512054, 0, v27);
      if ( BYTE2(v6[125].Header.WaitListHead.Flink) == (_BYTE)v33 )
      {
        BYTE2(v6[125].Header.WaitListHead.Flink) = 1;
        sub_1C0017B0C((_DWORD)DeviceObject, v33 + 1, (unsigned int)sub_1C0046920, v33, 0, 1666340431, 0LL);
      }
      sub_1C004A608((_DWORD)DeviceObject, 0, 75, (unsigned int)&v44, 4, v26, v46, (__int64)aBusC, 3318, 0);
    }
    else if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v26) )
    {
      sub_1C000FD80((_DWORD)DeviceObject, 4, 1769433138, 0, v27);
      sub_1C004A608((_DWORD)DeviceObject, 0, v32 + 1, v32, 0, v26, v46, (__int64)aBusC, 3331, 0);
    }
LABEL_56:
    sub_1C000FD80((_DWORD)DeviceObject, 4, 1769422386, 0, v6[114].Header.LockNV);
    _InterlockedDecrement(&v6[114].Header.Lock);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) != v35 )
      sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 39, (__int64)"FKh&", v3);
    LODWORD(v23) = sub_1C0003610((__int64)DeviceObject, v34, (_QWORD *)v10);
    return (int)v23;
  }
  if ( (v44 & 0x20000) != 0 )
  {
    sub_1C004A608((_DWORD)DeviceObject, 0, 72, (unsigned int)&v44, 4, v26, v46, (__int64)aBusC, 3270, 0);
  }
  else if ( (v44 & 0x10000) != 0 )
  {
    sub_1C004A608((_DWORD)DeviceObject, 0, 73, (unsigned int)&v44, 4, v26, v46, (__int64)aBusC, 3273, 0);
  }
  else
  {
    sub_1C004A608((_DWORD)DeviceObject, 0, 74, (unsigned int)&v44, 4, v26, v46, (__int64)aBusC, 3277, 0);
  }
  _InterlockedDecrement(&v6[114].Header.Lock);
  sub_1C0003610((__int64)DeviceObject, v30, (_QWORD *)v10);
  sub_1C00033C0(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 4, 1769422387, 0, v6[114].Header.LockNV);
  v23 = &off_1C006B000;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) != v31 )
    LODWORD(v23) = sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 38, (__int64)"FKh&");
  return (int)v23;
}
