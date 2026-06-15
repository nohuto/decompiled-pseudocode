/*
 * XREFs of sub_180036510 @ 0x180036510
 * Callers:
 *     sub_1800364B0 @ 0x1800364B0 (sub_1800364B0.c)
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 *     Callback @ 0x18005F170 (Callback.c)
 *     sub_180072EE8 @ 0x180072EE8 (sub_180072EE8.c)
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_180073300 @ 0x180073300 (sub_180073300.c)
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 *     sub_180073FA0 @ 0x180073FA0 (sub_180073FA0.c)
 *     sub_1800D8E00 @ 0x1800D8E00 (sub_1800D8E00.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180036724 @ 0x180036724 (sub_180036724.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180036864 @ 0x180036864 (sub_180036864.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_180046620 @ 0x180046620 (sub_180046620.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_180036510(ULONGLONG a1, char a2)
{
  bool v2; // zf
  HRESULT ApartmentType; // eax
  unsigned int v6; // r14d
  DWORD CurrentThreadId; // r15d
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // eax
  char v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+3Ch] [rbp-25h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp-11h] BYREF
  __m128i si128; // [rsp+58h] [rbp-9h] BYREF
  int v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp+Fh] BYREF
  int *v24; // [rsp+80h] [rbp+1Fh]
  char *v25; // [rsp+88h] [rbp+27h]
  char v26; // [rsp+90h] [rbp+2Fh]
  void *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16 = 0;
  v2 = *(_BYTE *)(a1 + 96) == 0;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180160300);
  v21 = -2147023728;
  v22 = -2147023728;
  v15 = 0;
  if ( v2 )
  {
    v12 = -2147418113;
    sub_18004BD84(retaddr, 1286LL, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", 2147549183LL);
    return v12;
  }
  if ( *(_BYTE *)(a1 + 552) )
  {
    if ( (unsigned int)dword_18019C4F0 > 5 )
      sub_180109634((int)&dword_18019C4F0, (int)&dword_18016C828, 0, 0, 2u, &v23);
  }
  else if ( (unsigned __int8)sub_180036AC8() )
  {
    sub_1800367E0(&unk_18019FAE0, 0LL);
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    if ( ApartmentType < 0 )
      sub_18006D26C(
        retaddr,
        1334LL,
        "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (unsigned int)ApartmentType);
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)a1 + 8LL))(a1);
    v6 = 0;
    v23.Ptr = a1;
    if ( pAptType == APTTYPE_MTA )
      v6 = 4;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)a1 + 8LL))(a1);
    v26 = a2;
    *(_QWORD *)&v23.Size = &si128;
    v24 = &v16;
    v25 = &v15;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (__int64 *)sub_180036724(&v18, &v23);
    v9 = *v8;
    *v8 = 0LL;
    if ( v18 )
    {
      v18 = 0LL;
      sub_180046620();
    }
    SHTaskPoolQueueTask(v6, 32LL, CurrentThreadId);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    sub_18000F708((__int64 *)&v23);
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)a1 + 16LL))(a1);
    v12 = v16;
    if ( v16 >= 0 )
    {
      if ( a2 )
      {
        if ( v15 || (v13 = *(_DWORD *)(a1 + 184), v13 == 8) || v13 == 3 )
        {
          if ( *(_QWORD *)(a1 + 40) )
          {
            sub_18005F1A8(v10, "Calling AtmosCodecsStatusChanged callback", 0LL);
            (***(void (__fastcall ****)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 40));
            v12 = v16;
          }
        }
      }
    }
    LOBYTE(v11) = v15;
    sub_180036864(a1, v12, v11);
    *(_DWORD *)(a1 + 184) = 7;
    return v12;
  }
  return 0LL;
}
