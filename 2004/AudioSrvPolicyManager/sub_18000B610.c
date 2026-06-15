/*
 * XREFs of sub_18000B610 @ 0x18000B610
 * Callers:
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A680 @ 0x18000A680 (sub_18000A680.c)
 *     sub_18000A85C @ 0x18000A85C (sub_18000A85C.c)
 *     sub_18000A8A4 @ 0x18000A8A4 (sub_18000A8A4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B610(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // di
  int v4; // r14d
  char v6; // dl
  __int64 v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rcx
  _DWORD *v11; // rbx
  _UNKNOWN **v12; // rcx
  USHORT v13; // dx
  _UNKNOWN **v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  bool v18; // bp
  _QWORD *v19; // rcx
  _DWORD *v20; // rbx
  _DWORD *v21; // rbx
  int v22; // edi
  _DWORD *v23; // rbx
  _DWORD *v24; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = 0;
  LODWORD(v24) = 0;
  v6 = *(_BYTE *)(a1 + 25);
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( v6 )
    {
      v19 = off_18004F000;
      if ( off_18004F000 == (_UNKNOWN *)&off_18004F000
        || (*((_DWORD *)off_18004F000 + 7) & 0x8000000) == 0
        || *((_BYTE *)off_18004F000 + 25) < 4u )
      {
        v20 = v24;
      }
      else
      {
        v20 = (_DWORD *)a2[3];
        if ( v20 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(a2[3]);
          v19 = off_18004F000;
        }
        sub_18000A8A4(v19[2], 0x12u, a3, *a2, v20[4]);
        v3 = 2;
      }
      if ( (v3 & 2) != 0 && v20 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = (_DWORD *)a2[3];
      if ( v21 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(a2[3]);
      v22 = v21[4];
      v18 = v22 != 0;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v22 )
      {
        v23 = (_DWORD *)a2[3];
        if ( v23 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(a2[3]);
        --v23[4];
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v14 = (_UNKNOWN **)off_18004F000;
    }
    else
    {
      v14 = (_UNKNOWN **)off_18004F000;
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        sub_18000A85C(*((_QWORD *)off_18004F000 + 2), 0x13u, a3, *a2);
        v14 = (_UNKNOWN **)off_18004F000;
      }
      v18 = *(_DWORD *)(a2[2] - 16LL) == 0;
    }
LABEL_76:
    if ( v18 )
      goto LABEL_18;
LABEL_29:
    if ( v14 == &off_18004F000 || (*((_DWORD *)v14 + 7) & 0x8000000) == 0 || *((_BYTE *)v14 + 25) < 4u )
      goto LABEL_40;
    sub_18000A680(
      (TRACEHANDLE)v14[2],
      0x17u,
      &MessageGuid,
      *(const wchar_t **)(a1 + 16),
      (const wchar_t *)a2[2],
      *((_DWORD *)a2 + 2));
    goto LABEL_33;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    v18 = !v8 && !*(_DWORD *)(a2[2] - 16LL);
    v14 = (_UNKNOWN **)off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A8A4(
        *((_QWORD *)off_18004F000 + 2),
        0x11u,
        *(_DWORD *)(a2[2] - 16LL) == 0,
        *a2,
        *(_DWORD *)(a2[2] - 16LL) == 0);
      v14 = (_UNKNOWN **)off_18004F000;
    }
    goto LABEL_76;
  }
  if ( !v8 || (unsigned int)o__wcsicoll(a2[2], v8) )
  {
    v14 = (_UNKNOWN **)off_18004F000;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(a2[2] - 16LL) )
  {
    v9 = (_DWORD *)a2[3];
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(a2[3]);
    ++v9[4];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = off_18004F000;
    if ( off_18004F000 == (_UNKNOWN *)&off_18004F000
      || (*((_DWORD *)off_18004F000 + 7) & 0x8000000) == 0
      || *((_BYTE *)off_18004F000 + 25) < 4u )
    {
      v11 = v24;
    }
    else
    {
      v11 = (_DWORD *)a2[3];
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(a2[3]);
        v10 = off_18004F000;
      }
      sub_18000A8A4(v10[2], 0x10u, a3, *a2, v11[4]);
      v3 = 1;
    }
    if ( (v3 & 1) != 0 && v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A85C(*((_QWORD *)off_18004F000 + 2), 0x14u, a3, *a2);
  }
  v4 = MMDevAPI_12(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !v4 )
  {
    v12 = (_UNKNOWN **)off_18004F000;
    if ( off_18004F000 == (_UNKNOWN *)&off_18004F000
      || (*((_DWORD *)off_18004F000 + 7) & 0x8000000) == 0
      || *((_BYTE *)off_18004F000 + 25) < 4u )
    {
      goto LABEL_40;
    }
    v13 = 22;
    goto LABEL_27;
  }
  v12 = (_UNKNOWN **)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v13 = 21;
LABEL_27:
    sub_1800050FC((TRACEHANDLE)v12[2], v13, &MessageGuid, *((_DWORD *)a2 + 2));
LABEL_33:
    v12 = (_UNKNOWN **)off_18004F000;
  }
  if ( v4 < 0 )
  {
    if ( v12 != &off_18004F000 && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      sub_1800050FC((TRACEHANDLE)v12[2], 0x18u, &MessageGuid, v4);
    sub_180005724("CGenerateDuckingNotification::Invoke", 627, v4);
  }
LABEL_40:
  v15 = a2[3];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (volatile signed __int32 *)(a2[2] - 24LL);
  if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  return (unsigned int)v4;
}
