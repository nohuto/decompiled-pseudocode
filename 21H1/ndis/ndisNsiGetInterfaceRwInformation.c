/*
 * XREFs of ndisNsiGetInterfaceRwInformation @ 0x1C00F9F50
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E0E0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned int v5; // r14d
  char v6; // si
  char *v8; // rdx
  BOOL v9; // r8d
  char *v10; // r12
  int v11; // edi
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  char v14; // r9
  unsigned int v15; // esi
  _QWORD *v16; // r15
  __int64 v17; // rdi
  unsigned __int16 v18; // cx
  char *v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // eax
  const void *v22; // rdx
  __int64 v23; // rbx
  int v24; // ebx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int (__fastcall *v28)(__int64, __int64, unsigned int *, char *); // rax
  char *v29; // rcx
  unsigned int v30; // ecx
  int v31; // eax
  char v33; // [rsp+50h] [rbp-288h]
  int v34; // [rsp+58h] [rbp-280h]
  unsigned int v35; // [rsp+5Ch] [rbp-27Ch] BYREF
  BOOL v36; // [rsp+60h] [rbp-278h]
  __int64 v37; // [rsp+68h] [rbp-270h]
  __int64 v38; // [rsp+70h] [rbp-268h]
  __int64 v39; // [rsp+78h] [rbp-260h]
  char v40[528]; // [rsp+80h] [rbp-258h] BYREF

  v3 = a2;
  v39 = a2;
  v4 = a3;
  v5 = 0;
  v38 = a3;
  v6 = a2;
  if ( !a2 )
    v3 = a1;
  v37 = v3;
  memset(v40, 0, 0x204uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      a1,
      v6,
      v4);
  v10 = *(char **)(v4 + 40);
  v11 = *(_DWORD *)(v4 + 48);
  v12 = *(_DWORD *)(v4 + 52);
  v34 = v11;
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_65;
  }
  v14 = 0;
  v33 = 0;
  if ( v11 <= 0 )
    goto LABEL_62;
  while ( !v14 )
  {
    LOBYTE(v9) = 0;
    v36 = v9;
    v8 = 0LL;
    if ( v12 > 0x218 )
    {
      if ( v12 == 570 )
      {
        v15 = 516;
        if ( *(_QWORD *)(a1 + 1424) )
          v8 = *(char **)(a1 + 1424);
        else
          v9 = v11 >= 516;
        v24 = 1088;
      }
      else
      {
        if ( v12 != 1088 )
          goto LABEL_59;
        v15 = 4;
        v33 = 1;
        v24 = 1092;
        v8 = (char *)(a1 + 1484);
      }
      goto LABEL_47;
    }
    switch ( v12 )
    {
      case 0x218u:
        v8 = (char *)(v3 + 1124);
        v25 = 0;
        v15 = 34;
        if ( !*(_BYTE *)(a1 + 1393) )
        {
          v8 = 0LL;
          v25 = 16843010;
        }
        v24 = 570;
        break;
      case 0u:
        v15 = 16;
        v8 = (char *)(a1 + 580);
        v24 = 16;
LABEL_47:
        v25 = 0;
        break;
      case 0x10u:
        v15 = 4;
        v25 = 66184;
        v24 = 20;
        break;
      case 0x14u:
        v15 = 516;
        if ( *(_BYTE *)(a1 + 1393) )
        {
          if ( *(_BYTE *)(a1 + 1394) )
          {
            v16 = *(_QWORD **)(a1 + 1408);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xEu,
                (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
                (char)v16,
                v40);
            memset(v40, 0, 0x204uLL);
            *(_WORD *)v40 = *(_WORD *)(v16[2] + 112LL) + 12 + *(_WORD *)(*(_QWORD *)(v16[4] + 4040LL) + 596LL);
            if ( *(_WORD *)v40 > 0x200u )
              *(_WORD *)v40 = 512;
            memmove(
              &v40[2],
              (const void *)(*(_QWORD *)(v16[4] + 4040LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(v16[4] + 4040LL) + 596LL));
            v17 = *(unsigned __int16 *)(*(_QWORD *)(v16[4] + 4040LL) + 596LL);
            v18 = *(_WORD *)v40;
            v19 = &v40[v17 + 2];
            if ( *(unsigned __int16 *)v40 - (unsigned int)v17 >= 2 )
            {
              *(_WORD *)v19 = 45;
              LODWORD(v17) = v17 + 2;
              v18 = *(_WORD *)v40;
              v19 += 2;
            }
            if ( v18 > (unsigned int)v17 )
            {
              v20 = v16[2];
              v21 = *(unsigned __int16 *)(v20 + 112);
              v22 = *(const void **)(v20 + 120);
              if ( v18 - (unsigned int)v17 <= v21 )
                v21 = v18 - (_DWORD)v17;
              v23 = v21;
              memmove(v19, v22, v21);
              v18 = *(_WORD *)v40;
              LODWORD(v17) = v23 + v17;
              v19 += v23;
            }
            if ( v18 - (unsigned int)v17 >= 2 )
            {
              *(_WORD *)v19 = 45;
              LODWORD(v17) = v17 + 2;
              v18 = *(_WORD *)v40;
              v19 += 2;
            }
            if ( v18 - (unsigned int)v17 >= 8 )
              *(_QWORD *)v19 = *(_QWORD *)(*(_QWORD *)(v16[5] + 8LL)
                                         + 2 * (((unsigned __int64)*(unsigned __int16 *)v16[5] - 8) >> 1));
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xFu,
                (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
                (char)v16,
                v40);
            v11 = v34;
            v8 = v40;
            v9 = v36;
            v3 = v37;
            v24 = 536;
            v25 = 0;
          }
          else
          {
            v25 = 0;
            v8 = (char *)(a1 + 596);
            v24 = 536;
          }
        }
        else
        {
          v24 = 536;
          v25 = 66185;
        }
        break;
      default:
        goto LABEL_59;
    }
    if ( v11 < (int)v15 )
      goto LABEL_59;
    if ( v25 )
    {
      v26 = v25;
      v27 = *(_QWORD *)(v3 + 1320);
      v28 = *(unsigned int (__fastcall **)(__int64, __int64, unsigned int *, char *))(*(_QWORD *)(v3 + 1328) + 56LL);
      v35 = v15;
      if ( v28(v27, v26, &v35, v10) )
        goto LABEL_56;
      if ( v35 < v15 )
      {
        v15 -= v35;
        v29 = &v10[v35];
        goto LABEL_57;
      }
    }
    else
    {
      if ( !v8 )
      {
        if ( !v9 )
        {
LABEL_59:
          v14 = 1;
          v33 = 1;
          goto LABEL_60;
        }
LABEL_56:
        v29 = v10;
LABEL_57:
        memset(v29, 0, v15);
        goto LABEL_58;
      }
      memmove(v10, v8, v15);
    }
LABEL_58:
    v14 = v33;
    v30 = v24 - v12;
    v12 = v24;
    v10 += v30;
    v11 -= v30;
    v34 = v11;
LABEL_60:
    if ( v11 <= 0 )
      break;
  }
  v4 = v38;
  v6 = v39;
LABEL_62:
  v13 = v12 - *(_DWORD *)(v4 + 52);
  v31 = -1073741811;
  if ( v13 )
    v31 = 0;
  v5 = v31;
LABEL_65:
  *(_DWORD *)(v4 + 48) = v13;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      a1,
      v6,
      v4,
      v5);
  return v5;
}
