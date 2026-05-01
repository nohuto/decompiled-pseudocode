/*
 * XREFs of sub_180032330 @ 0x180032330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 *     sub_1800326E8 @ 0x1800326E8 (sub_1800326E8.c)
 *     sub_18004024C @ 0x18004024C (sub_18004024C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006DC78 @ 0x18006DC78 (sub_18006DC78.c)
 *     sub_18006DE78 @ 0x18006DE78 (sub_18006DE78.c)
 *     sub_18006DF4C @ 0x18006DF4C (sub_18006DF4C.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006EB6C @ 0x18006EB6C (sub_18006EB6C.c)
 *     sub_18006FD1C @ 0x18006FD1C (sub_18006FD1C.c)
 */

int __fastcall sub_180032330(__int64 a1, __int64 *a2)
{
  DWORD v3; // edi
  __int64 v4; // r15
  char v5; // al
  struct _EVENT_DATA_DESCRIPTOR **v6; // rdi
  char v7; // cl
  unsigned int v8; // r13d
  DWORD CurrentThreadId; // eax
  bool v10; // r14
  struct _EVENT_DATA_DESCRIPTOR *v11; // rax
  bool v12; // zf
  __int64 v13; // r12
  struct _EVENT_DATA_DESCRIPTOR *v14; // rax
  unsigned int Ptr_high; // r14d
  __int64 v16; // rax
  DWORD v17; // ebx
  bool v18; // r10
  unsigned int v19; // r9d
  struct _EVENT_DATA_DESCRIPTOR **v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v21; // rcx
  struct _EVENT_DATA_DESCRIPTOR **v22; // rax
  ULONGLONG Ptr; // rax
  struct _EVENT_DATA_DESCRIPTOR **v24; // r8
  char v25; // al
  struct _EVENT_DATA_DESCRIPTOR **v26; // r8
  struct _EVENT_DATA_DESCRIPTOR ***v27; // rax
  struct _EVENT_DATA_DESCRIPTOR ***v28; // rax
  ULONGLONG v29; // r12
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  bool v33[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v34[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+E0h] [rbp-20h] BYREF

  memset(TlsValue, 0, 0x88uLL);
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009C8E0, 0LL, 0LL, 2u, &v36);
  v4 = *a2;
  v34[1] = v34;
  v34[0] = v34;
  RtlAcquireSRWLockExclusive(a2 + 9);
  *((_DWORD *)a2 + 20) = GetCurrentThreadId();
  v5 = *((_BYTE *)a2 + 148);
  if ( (v5 & 1) != 0 )
  {
    v6 = (struct _EVENT_DATA_DESCRIPTOR **)(a2 + 11);
    do
    {
      v7 = v5 & 0xF6 | (2 * (v5 & 4));
      *((_BYTE *)a2 + 148) = v7;
      if ( ((2 * (v5 & 4)) & 8) != 0 )
      {
        v8 = 0;
      }
      else
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive(a2 + 9);
        RtlAcquireSRWLockExclusive(v4 + 592);
        *(_DWORD *)(v4 + 648) = GetCurrentThreadId();
        v8 = *(_DWORD *)(v4 + 640);
        *(_DWORD *)(v4 + 648) = 0;
        RtlReleaseSRWLockExclusive(v4 + 592);
        RtlAcquireSRWLockExclusive(a2 + 9);
        CurrentThreadId = GetCurrentThreadId();
        v7 = *((_BYTE *)a2 + 148);
        *((_DWORD *)a2 + 20) = CurrentThreadId;
      }
      v10 = (v7 & 8) == 0 && *((_DWORD *)a2 + 34);
      v11 = *v6;
      v33[0] = v10;
      if ( v11 != (struct _EVENT_DATA_DESCRIPTOR *)v6 )
      {
        v18 = v8 != HIDWORD(v11[1].Ptr) || (BYTE2(v11[5].Ptr) & 5) != 1;
        v19 = 0;
        *(_QWORD *)&v36.Size = &v36;
        v20 = v6;
        v36.Ptr = (ULONGLONG)&v36;
        do
        {
          v21 = *v20;
          if ( *v20 != (struct _EVENT_DATA_DESCRIPTOR *)v20 )
          {
            if ( v18 )
            {
              if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v20
                || (v22 = (struct _EVENT_DATA_DESCRIPTOR **)v20[1], *v22 != (struct _EVENT_DATA_DESCRIPTOR *)v20)
                || (*v22 = v21,
                    *(_QWORD *)&v21->Size = v22,
                    Ptr = v36.Ptr,
                    v24 = *(struct _EVENT_DATA_DESCRIPTOR ***)&v36.Size,
                    v20[1] = (struct _EVENT_DATA_DESCRIPTOR *)v20,
                    *v20 = (struct _EVENT_DATA_DESCRIPTOR *)v20,
                    *(struct _EVENT_DATA_DESCRIPTOR **)(Ptr + 8) != &v36)
                || *v24 != &v36
                || *(struct _EVENT_DATA_DESCRIPTOR **)(v21->Ptr + 8) != v21
                || **(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v21 )
              {
LABEL_77:
                __fastfail(3u);
              }
              *v24 = v21;
              *(_QWORD *)&v36.Size = *(_QWORD *)&v21->Size;
              **(_QWORD **)&v21->Size = &v36;
              *(_QWORD *)&v21->Size = v24;
            }
            else if ( v19 )
            {
              do
              {
                v25 = BYTE2(v21[5].Ptr);
                v26 = (struct _EVENT_DATA_DESCRIPTOR **)v21;
                v21 = (struct _EVENT_DATA_DESCRIPTOR *)v21->Ptr;
                if ( (v25 & 5) != 1 )
                {
                  if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v26 )
                    goto LABEL_77;
                  v27 = (struct _EVENT_DATA_DESCRIPTOR ***)v26[1];
                  if ( *v27 != v26 )
                    goto LABEL_77;
                  *v27 = (struct _EVENT_DATA_DESCRIPTOR **)v21;
                  *(_QWORD *)&v21->Size = v27;
                  v28 = *(struct _EVENT_DATA_DESCRIPTOR ****)&v36.Size;
                  if ( **(struct _EVENT_DATA_DESCRIPTOR ***)&v36.Size != &v36 )
                    goto LABEL_77;
                  v26[1] = *(struct _EVENT_DATA_DESCRIPTOR **)&v36.Size;
                  *v26 = &v36;
                  *v28 = v26;
                  *(_QWORD *)&v36.Size = v26;
                }
              }
              while ( v21 != (struct _EVENT_DATA_DESCRIPTOR *)v20 );
            }
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < 2 );
        if ( (struct _EVENT_DATA_DESCRIPTOR *)v36.Ptr != &v36 )
        {
          *((_DWORD *)a2 + 20) = 0;
          RtlReleaseSRWLockExclusive(a2 + 9);
          while ( 1 )
          {
            v29 = v36.Ptr;
            if ( (struct _EVENT_DATA_DESCRIPTOR *)v36.Ptr == &v36 )
              break;
            v30 = *(_QWORD *)v36.Ptr;
            if ( *(_QWORD *)(*(_QWORD *)v36.Ptr + 8LL) != v36.Ptr )
              goto LABEL_77;
            v31 = *(_QWORD **)(v36.Ptr + 8);
            if ( *v31 != v36.Ptr )
              goto LABEL_77;
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            *(_OWORD *)v29 = 0LL;
            sub_18006FD1C(a2, v29 - 88);
            *(_DWORD *)(v29 + 16) = 2;
            sub_18006E348((PVOID)(v29 - 88));
          }
          RtlAcquireSRWLockExclusive(a2 + 9);
          *((_DWORD *)a2 + 20) = GetCurrentThreadId();
        }
      }
      if ( *v6 == (struct _EVENT_DATA_DESCRIPTOR *)v6 )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive(a2 + 9);
        v12 = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a2 + 33));
        if ( !v12 )
        {
          do
          {
            ((void (__fastcall *)(__int64 *, _QWORD))off_180093EC0[5 * v13])(a2, 0LL);
            *((_DWORD *)a2 + 33) &= ~(1 << v13);
            v12 = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a2 + 33));
          }
          while ( !v12 );
          v6 = (struct _EVENT_DATA_DESCRIPTOR **)(a2 + 11);
        }
        RtlAcquireSRWLockExclusive(a2 + 9);
        *((_DWORD *)a2 + 20) = GetCurrentThreadId();
      }
      sub_1800326E8(a2);
      if ( !v10 && *((_BYTE *)a2 + 140) )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive(a2 + 9);
        if ( (unsigned __int8)sub_180045CFC() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RtlAcquireSRWLockExclusive(a2 + 9);
        *((_DWORD *)a2 + 20) = GetCurrentThreadId();
      }
      if ( (*((_BYTE *)a2 + 148) & 8) == 0 )
      {
        sub_180032644(a2, v8, v34, v33);
        if ( v33[0] )
          sub_18006EB6C(a2);
        if ( (_QWORD *)v34[0] != v34 )
        {
          sub_18006DC78(a2, v34);
          sub_18006DF4C(a2, v34);
          sub_18006DE78(a2);
          sub_1800326E8(a2);
        }
      }
      v14 = *v6;
      if ( *v6 == (struct _EVENT_DATA_DESCRIPTOR *)v6 || (v14[3].Size & 0x10) != 0 )
        Ptr_high = 0;
      else
        Ptr_high = HIDWORD(v14[1].Ptr);
      if ( Ptr_high != *((_DWORD *)a2 + 36) )
      {
        sub_18004024C(Ptr_high);
        *((_DWORD *)a2 + 36) = Ptr_high;
      }
      v5 = *((_BYTE *)a2 + 148);
    }
    while ( (v5 & 1) != 0 );
  }
  *((_DWORD *)a2 + 20) = 0;
  *((_BYTE *)a2 + 148) = v5 & 0xFD;
  LODWORD(v16) = RtlReleaseSRWLockExclusive(a2 + 9);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
  {
    v16 = qword_1800B31F8 & 1;
    if ( v16 == qword_1800B31F8 )
      LODWORD(v16) = sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009CBAD, 0LL, 0LL, 2u, &v36);
  }
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    LODWORD(v16) = TlsSetValue(v17, 0LL);
  }
  return v16;
}
