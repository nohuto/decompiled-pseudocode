/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C0016C24
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0016A20 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  unsigned int v7; // edi
  int v11; // r15d
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r12
  __int64 v14; // r9
  int Ulong; // eax
  int v16; // edx
  unsigned int v17; // ebp
  int v18; // r8d
  unsigned __int16 v19; // bx
  int v20; // edx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // r9d
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // bx
  __int64 v29; // [rsp+90h] [rbp+8h]
  unsigned __int16 *v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v7 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v29 = v14;
  *a3 = 0;
  if ( !a6 )
  {
LABEL_18:
    if ( (v11 & 4) != 0 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = 52;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 5;
      }
      v27 = v12 + 1;
      if ( v27 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v27) = 180;
        *(_WORD *)(a2 + 4LL * v27 + 2) = 5;
      }
      v12 = v27 + 1;
    }
    if ( (v11 & 5) == 5 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = (a7 != 0 ? 0x4000 : 0) | 0x35;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 10;
      }
      v28 = v12 + 1;
      if ( v28 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v28) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
        *(_WORD *)(a2 + 4LL * v28 + 2) = 10;
      }
      v12 = v28 + 1;
    }
    *a3 = v12;
    return v7;
  }
  while ( 1 )
  {
    Ulong = XilRegister_ReadUlong(v14, (unsigned int *)(a5 + 4LL * v13));
    v17 = Ulong & 0xF;
    if ( _bittest(&v11, v17) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v26 = 193;
      goto LABEL_46;
    }
    v11 |= 1 << v17;
    v16 = v12;
    if ( v12 < a4 )
    {
      if ( !a7 || (v18 = 0x4000, v17 <= 4) )
        v18 = 0;
      *(_DWORD *)(a2 + 4LL * v12) = v18 | Ulong & 0x30;
      *(_WORD *)(a2 + 4LL * v12 + 2) = HIWORD(Ulong);
      *(_DWORD *)(a2 + 4LL * v12) = v17 | *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFFF0;
    }
    if ( (Ulong & 0xC0) == 0x80 )
      break;
    if ( (Ulong & 0xC0) == 0 )
    {
      if ( v12 < a4 )
        *(_DWORD *)(a2 + 4LL * v12) &= 0xFFFFFF3F;
      v19 = v12 + 1;
      if ( v19 < a4 )
      {
        if ( !a7 || (v20 = 0x4000, v17 <= 4) )
          v20 = 0;
        *(_DWORD *)(a2 + 4LL * v19) = v20 | Ulong & 0x30;
        *(_WORD *)(a2 + 4LL * v19 + 2) = HIWORD(Ulong);
        *(_DWORD *)(a2 + 4LL * v19) = Ulong & 0xF | *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFB0 | 0x80;
      }
LABEL_15:
      v12 = v19 + 1;
      goto LABEL_16;
    }
    if ( (Ulong & 0xC0) == 0xC0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v26 = 196;
LABEL_46:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v16,
        11,
        v26,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        v17);
      return (unsigned int)-1073741811;
    }
LABEL_16:
    if ( ++v13 >= a6 )
    {
      a3 = v30;
      goto LABEL_18;
    }
    v14 = v29;
  }
  if ( v12 < a4 )
    *(_DWORD *)(a2 + 4LL * v12) = *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFF3F | 0x40;
  v19 = v12 + 1;
  if ( ++v13 >= a6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v26 = 194;
    goto LABEL_46;
  }
  v22 = XilRegister_ReadUlong(v29, (unsigned int *)(a5 + 4LL * v13));
  v23 = v22 & 0xF;
  v24 = (unsigned __int8)v22 >> 6;
  if ( v23 == v17 && v24 == 3 )
  {
    if ( v19 < a4 )
    {
      if ( !a7 || (v25 = 0x4000, v17 <= 4) )
        v25 = 0;
      *(_DWORD *)(a2 + 4LL * v19) = v25 | v22 & 0x30;
      *(_WORD *)(a2 + 4LL * v19 + 2) = WORD1(v22);
      *(_DWORD *)(a2 + 4LL * v19) = v23 | *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFF0 | 0xC0;
    }
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 2;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v24,
      11,
      195,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v17,
      2,
      v23,
      (unsigned __int8)v22 >> 6);
  }
  return (unsigned int)-1073741811;
}
