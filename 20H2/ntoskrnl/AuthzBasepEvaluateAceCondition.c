/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x14022B610
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201564 (SepVerifyDesktopAppxPackageName.c)
 *     SepMaximumAccessCheck @ 0x140204FB0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140224E20 (SepFilterCheck.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140373854 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037397C (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x140923C50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140924580 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14022B12C (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepResetOperands @ 0x14022BC8C (AuthzBasepResetOperands.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14029DCC0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateExpression @ 0x1402E4510 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1402E4A50 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     SepPotentialGlobalTableAttribute @ 0x1402FD050 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepIsValidExpression @ 0x14030BF98 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x1403148C0 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepEvaluateAttribute @ 0x140314AC0 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepPushResult @ 0x140317BD0 (AuthzBasepPushResult.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B4AAC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140595FBC (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1405C05B8 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x1405C0640 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x1405C0788 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x1405C089C (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  unsigned int v12; // r12d
  _DWORD *v13; // r13
  int SecurityAttributeAndValues; // r14d
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rbx
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  __int64 v22; // rsi
  PVOID *v23; // rsi
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  PVOID *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // r15
  _BYTE *v34; // rbx
  PVOID *v35; // rdi
  bool v37; // zf
  int v38; // eax
  int v39; // r10d
  int v40; // r8d
  int v41; // r8d
  int v42; // eax
  char v43; // al
  char v44; // al
  int v45; // eax
  bool v46; // al
  char v47; // al
  __int64 v48; // r10
  __int64 v49; // r10
  int v50; // eax
  PVOID v51; // rbx
  int v52; // [rsp+20h] [rbp-E0h]
  _BYTE v53[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v54[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  char v56; // [rsp+3Ch] [rbp-C4h] BYREF
  char v57; // [rsp+3Dh] [rbp-C3h]
  _DWORD *v58; // [rsp+40h] [rbp-C0h]
  char v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+4Ch] [rbp-B4h] BYREF
  char v61; // [rsp+50h] [rbp-B0h]
  bool v62; // [rsp+51h] [rbp-AFh]
  int v63; // [rsp+54h] [rbp-ACh]
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h]
  PVOID *v67; // [rsp+68h] [rbp-98h]
  _OWORD v68[5]; // [rsp+70h] [rbp-90h] BYREF
  int v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  PVOID v72; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v74; // [rsp+E8h] [rbp-18h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  PCUNICODE_STRING String2; // [rsp+118h] [rbp+18h]
  __int128 v81; // [rsp+120h] [rbp+20h] BYREF
  __int128 v82; // [rsp+130h] [rbp+30h]
  char *v83; // [rsp+140h] [rbp+40h]
  __int128 v84; // [rsp+150h] [rbp+50h] BYREF
  PVOID P[16]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v86[256]; // [rsp+1E0h] [rbp+E0h] BYREF

  v12 = 0;
  v13 = a8;
  SecurityAttributeAndValues = 0;
  v75 = a5;
  v78 = a6;
  v79 = a3;
  v70 = a2;
  v66 = a1;
  v77 = a7;
  v76 = a4;
  v74 = a8;
  v58 = a12;
  v60 = 0;
  LODWORD(v84) = 0;
  *((_QWORD *)&v84 + 1) = 0LL;
  memset(P, 0, sizeof(P));
  LOWORD(v68[0]) = 0;
  BYTE4(v68[0]) = 0;
  memset((char *)v68 + 5, 0, 0x4BuLL);
  v55 = -1;
  v83 = 0LL;
  v73 = -1LL;
  v64 = 0;
  v65 = 0;
  v16 = 2LL;
  v69 = 0;
  v54[0] = 0;
  v57 = 0;
  v56 = 0;
  v53[0] = 0;
  v61 = 0;
  v59 = 0;
  v72 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  v81 = 0LL;
  HIDWORD(v81) = 1;
  v82 = 0LL;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    v33 = a12;
    goto LABEL_40;
  }
  v62 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v33 = a12;
    goto LABEL_40;
  }
  if ( *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v33 = a12;
    goto LABEL_40;
  }
  AuthzBasepResetOperands(v68, v54);
  LODWORD(v17) = 4;
  v63 = 0;
  if ( a9 <= 4 )
    goto LABEL_59;
  do
  {
    v18 = *((unsigned __int8 *)v13 + (unsigned int)v17);
    if ( v18 == 248 )
    {
LABEL_14:
      v19 = (unsigned int)(v17 + 1);
      if ( v12 == 2 )
      {
        if ( HIDWORD(v68[0]) == 1 )
          goto LABEL_57;
        v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_58;
        if ( LOBYTE(v54[0]) )
          ExFreePoolWithTag(*(PVOID *)(v49 + 24), 0);
        v84 = *(_OWORD *)&P[7];
        *(_OWORD *)P = *(_OWORD *)&P[9];
        *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
        P[6] = P[15];
        *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
        *(_OWORD *)((char *)&v68[1] + 8) = v68[4];
        *(_QWORD *)&v68[1] = &v84;
        v54[0] = HIBYTE(v54[0]);
        v68[0] = *(_OWORD *)((char *)&v68[2] + 8);
        *(_OWORD *)((char *)&v68[2] + 8) = 0LL;
        *((_QWORD *)&v68[4] + 1) = 0LL;
        *(_OWORD *)((char *)&v68[3] + 8) = 0LL;
        memset(&P[7], 0, 0x48uLL);
        v12 = 1;
        v63 = 1;
      }
      if ( a9 - (unsigned int)v19 < 4 )
        goto LABEL_57;
      v20 = *(_DWORD *)((char *)v13 + v19);
      v21 = v19 + 4;
      if ( a9 - v21 < v20 )
        goto LABEL_57;
      if ( v20 > 0xFFFE )
      {
        SecurityAttributeAndValues = -1073741562;
        goto LABEL_58;
      }
      v83 = (char *)v74 + v21;
      DWORD2(v82) = v20;
      v22 = 9LL * v12;
      v71 = v22 * 8;
      String2 = (PCUNICODE_STRING)&P[v22];
      SecurityAttributeAndValues = AuthzBasepUnicodeStringFromOperandValue(&v81, 0LL, &P[v22], (char *)v54 + v12);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_58;
      v23 = &P[v22 - 2];
      v24 = (__int64 *)((char *)&P[-1] + v71);
      v67 = (PVOID *)((char *)&P[-1] + v71);
      switch ( (_BYTE)v18 )
      {
        case 0xF9:
          v25 = v75;
          if ( !a11 )
            v25 = v76;
          *(_DWORD *)v23 = 3;
          break;
        case 0xFB:
          v25 = v77;
          if ( !a11 )
            v25 = v78;
          *(_DWORD *)v23 = 5;
          break;
        case 0xFA:
          v25 = v79;
          *(_DWORD *)v23 = 4;
          break;
        case 0xFC:
          v26 = v66;
          v25 = v66;
          *(_DWORD *)v23 = 6;
LABEL_25:
          *v24 = v25;
          v27 = 9LL * v12;
          P[v27 + 5] = 0LL;
          P[v27 + 6] = 0LL;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v23);
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_32;
          if ( *(_DWORD *)v23 == 2
            && (SepSingletonGlobal[4] & 1) != 0
            && (*(_DWORD *)(v26 + 200) & 0x20000) == 0
            && (unsigned __int8)SepPotentialGlobalTableAttribute(String2)
            && !v61 )
          {
            if ( v59 )
            {
LABEL_177:
              v28 = v67;
              *v67 = v72;
              SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v23);
              if ( SecurityAttributeAndValues != -1073741275 )
                goto LABEL_32;
              *v28 = (PVOID)v70;
              goto LABEL_29;
            }
            v50 = SepValidateAndCopyGlobalEntry(v70, &v72);
            SecurityAttributeAndValues = v50;
            if ( v50 >= 0 )
            {
              v59 = 1;
              goto LABEL_177;
            }
            v61 = 1;
            if ( v50 != -1073741275 )
              goto LABEL_32;
          }
          v28 = v67;
LABEL_29:
          if ( v62 || *(_DWORD *)v23 != 2 )
            goto LABEL_65;
          *(_DWORD *)v23 = 7;
          *v28 = 0LL;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v23);
LABEL_32:
          if ( SecurityAttributeAndValues >= 0 )
          {
            v29 = v71;
            v30 = 40LL * v12;
            *(_QWORD *)((char *)&v68[1] + v30) = v23;
            *(_WORD *)((char *)v68 + v30) = *(_WORD *)((char *)&P[2] + v29);
            *(_DWORD *)((char *)v68 + v30 + 4) = *(_DWORD *)((char *)&P[3] + v29);
LABEL_34:
            v31 = *(_DWORD *)v23;
            *(_DWORD *)((char *)&v68[1] + v30 + 8) = 0;
            *(_QWORD *)((char *)&v68[2] + v30) = 0LL;
            *(_DWORD *)((char *)v68 + v30 + 8) = 0;
            v12 = v63 + 1;
            *(_DWORD *)((char *)v68 + v30 + 12) = v31;
            LODWORD(v17) = v20 + v21;
            v13 = v74;
LABEL_35:
            v63 = v12;
            continue;
          }
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_58;
LABEL_65:
          v30 = 40LL * v12;
          SecurityAttributeAndValues = 0;
          *(_WORD *)((char *)v68 + v30) = 0;
          *(_DWORD *)((char *)v68 + v30 + 4) = 0;
          *(_QWORD *)((char *)&v68[1] + v30) = 0LL;
          if ( *((_BYTE *)v54 + v12) )
          {
            ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v71), 0);
            if ( v12 >= 2uLL )
              _report_rangecheckfailure();
            *((_BYTE *)v54 + v12) = 0;
          }
          goto LABEL_34;
        default:
          v25 = v70;
          *(_DWORD *)v23 = 2;
          break;
      }
      v26 = v66;
      goto LABEL_25;
    }
    if ( v18 == 162 )
    {
      LODWORD(v17) = v17 + 1;
      if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v68, v12, v53) )
        goto LABEL_57;
      if ( v12 == 1 )
      {
        v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
        AuthzBasepResetOperands(v68, v54);
      }
      else
      {
        SecurityAttributeAndValues = AuthzBasepPopResult(v86, &v60, &v55);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_58;
      }
      goto LABEL_51;
    }
    if ( (_BYTE)v18 )
    {
      if ( v18 != 134 )
      {
        if ( v18 == 16 )
        {
LABEL_11:
          if ( v12 == 2 )
          {
            if ( HIDWORD(v68[0]) == 1 )
              goto LABEL_57;
            v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
            SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_58;
            if ( LOBYTE(v54[0]) )
              ExFreePoolWithTag(*(PVOID *)(v48 + 24), 0);
            v84 = *(_OWORD *)&P[7];
            *(_OWORD *)P = *(_OWORD *)&P[9];
            *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
            P[6] = P[15];
            *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
            *(_OWORD *)((char *)&v68[1] + 8) = v68[4];
            *(_QWORD *)&v68[1] = &v84;
            v54[0] = HIBYTE(v54[0]);
            v68[0] = *(_OWORD *)((char *)&v68[2] + 8);
            *(_OWORD *)((char *)&v68[2] + 8) = 0LL;
            *((_QWORD *)&v68[4] + 1) = 0LL;
            *(_OWORD *)((char *)&v68[3] + 8) = 0LL;
            memset(&P[7], 0, 0x48uLL);
            v12 = 1;
          }
          SecurityAttributeAndValues = AuthzBasepGetConstantOperand(
                                         (char *)v13 + (unsigned int)v17,
                                         a9 - (unsigned int)v17,
                                         (char *)v68 + 40 * v12,
                                         &v69);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_58;
          ++v12;
          LODWORD(v17) = v69 + v17;
          goto LABEL_35;
        }
        switch ( *((_BYTE *)v13 + (unsigned int)v17) )
        {
          case 1:
          case 2:
          case 3:
          case 4:
          case 0x18:
          case 0x50:
          case 0x51:
            goto LABEL_11;
          case 0x80:
          case 0x81:
          case 0x82:
          case 0x83:
          case 0x84:
          case 0x85:
          case 0x88:
          case 0x8E:
          case 0x8F:
            goto LABEL_60;
          case 0x87:
          case 0x8D:
            LODWORD(v17) = v17 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
              goto LABEL_57;
            v55 = *(_QWORD *)&v68[1] != 0LL;
            if ( (_BYTE)v18 == 0x8D )
              v55 = *(_QWORD *)&v68[1] == 0LL;
            goto LABEL_72;
          case 0x89:
          case 0x8B:
          case 0x90:
          case 0x92:
            LODWORD(v17) = v17 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
            {
              SecurityAttributeAndValues = -1073741406;
              if ( !v53[0] )
                goto LABEL_58;
LABEL_113:
              v55 = -1;
              v42 = -1;
              goto LABEL_125;
            }
            if ( v53[0] )
            {
              v44 = v57;
            }
            else
            {
              v43 = (_BYTE)v18 == 0x89 || (_BYTE)v18 == 0x90;
              SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v68, v66, a10, a11, v43, (__int64)&v56);
              v44 = v56;
              v57 = v56;
            }
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_113;
            if ( v44 )
            {
              v55 = 1;
              v42 = 1;
            }
            else
            {
              v55 = 0;
              v42 = 0;
            }
LABEL_125:
            if ( (((_BYTE)v18 + 112) & 0xFD) == 0 && v42 != -1 )
              v55 = v42 == 0;
            SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
            if ( SecurityAttributeAndValues >= 0 )
              goto LABEL_52;
            goto LABEL_58;
          case 0x8A:
          case 0x8C:
          case 0x91:
          case 0x93:
            LODWORD(v17) = v17 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
            {
              SecurityAttributeAndValues = -1073741406;
              if ( !v53[0] )
                goto LABEL_58;
LABEL_132:
              v55 = -1;
              v45 = -1;
              goto LABEL_144;
            }
            if ( v53[0] )
            {
              v47 = v57;
            }
            else
            {
              v46 = (_BYTE)v18 == 0x8A || (_BYTE)v18 == 0x91;
              LOBYTE(v52) = v46;
              SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(v68, v66, a10, a11, v52, &v56);
              v47 = v56;
              v57 = v56;
            }
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_132;
            if ( v47 )
            {
              v55 = 1;
              v45 = 1;
            }
            else
            {
              v55 = 0;
              v45 = 0;
            }
LABEL_144:
            if ( (((_BYTE)v18 + 111) & 0xFD) == 0 && v45 != -1 )
              v55 = v45 == 0;
LABEL_72:
            SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
            if ( SecurityAttributeAndValues >= 0 )
              goto LABEL_52;
            goto LABEL_58;
          case 0xA0:
          case 0xA1:
            LODWORD(v17) = v17 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
              goto LABEL_57;
            if ( v12 == 2 )
            {
              v64 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
              v38 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v68[3] + 1));
              v65 = v38;
            }
            else
            {
              if ( v12 == 1 )
              {
                v64 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
              }
              else
              {
                SecurityAttributeAndValues = AuthzBasepPopResult(v86, &v60, &v64);
                if ( SecurityAttributeAndValues < 0 )
                  goto LABEL_58;
              }
              SecurityAttributeAndValues = AuthzBasepPopResult(v86, &v60, &v65);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_58;
              v38 = v65;
            }
            if ( (_BYTE)v18 == 0xA0 )
            {
              if ( !v39 || !v38 )
                goto LABEL_98;
              if ( v39 == -1 || v38 == -1 )
                goto LABEL_93;
            }
            else if ( v39 != 1 && v38 != 1 )
            {
              if ( v39 != -1 && v38 != -1 )
              {
LABEL_98:
                v55 = 0;
                goto LABEL_101;
              }
LABEL_93:
              v40 = -1;
              goto LABEL_100;
            }
            v40 = 1;
LABEL_100:
            v55 = v40;
LABEL_101:
            SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_58;
            break;
          case 0xA3:
            LODWORD(v17) = v17 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
            {
              SecurityAttributeAndValues = -1073741406;
              if ( !v53[0] )
                goto LABEL_58;
LABEL_105:
              v41 = -1;
              goto LABEL_106;
            }
            if ( v53[0] )
              goto LABEL_105;
            AuthzBasepComputeExpression((unsigned __int8)v18, v68, &v73);
            if ( v73 == -1 )
              goto LABEL_105;
            v41 = v73 != 0;
LABEL_106:
            v55 = v41;
            SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_58;
            AuthzBasepResetOperands(v68, v54);
            continue;
          case 0xF9:
          case 0xFA:
          case 0xFB:
          case 0xFC:
            goto LABEL_14;
          default:
            goto LABEL_57;
        }
        goto LABEL_52;
      }
LABEL_60:
      LODWORD(v17) = v17 + 1;
      if ( (unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v68, v12, v53) )
      {
        if ( !v53[0] )
        {
          AuthzBasepEvaluateExpression((unsigned __int8)v18, v68, &v55);
          if ( ((_BYTE)v18 == 0x8E || (_BYTE)v18 == 0x8F) && v55 != -1 )
            v55 = v55 == 0;
LABEL_51:
          SecurityAttributeAndValues = AuthzBasepPushResult(v86, &v60);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_58;
LABEL_52:
          AuthzBasepResetOperands(v68, v54);
          v12 = 0;
          v63 = 0;
          continue;
        }
      }
      else
      {
        SecurityAttributeAndValues = -1073741406;
        if ( !v53[0] )
          goto LABEL_58;
      }
      v55 = -1;
      goto LABEL_51;
    }
    while ( 1 )
    {
      v17 = (unsigned int)(v17 + 1);
      v37 = (_DWORD)v17 == a9;
      if ( (unsigned int)v17 >= a9 )
        break;
      if ( *((_BYTE *)v13 + v17) )
      {
        v37 = (_DWORD)v17 == a9;
        break;
      }
    }
    if ( !v37 )
    {
LABEL_57:
      SecurityAttributeAndValues = -1073741406;
      goto LABEL_58;
    }
  }
  while ( (unsigned int)v17 < a9 );
  if ( v60 == 1 )
  {
    v32 = v86[0];
LABEL_39:
    v33 = v58;
    v16 = 2LL;
    *v58 = v32;
    goto LABEL_40;
  }
  if ( !v60 && v12 == 1 )
  {
    v32 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v68[1]);
    goto LABEL_39;
  }
LABEL_58:
  v16 = 2LL;
LABEL_59:
  v33 = v58;
LABEL_40:
  v34 = v54;
  v35 = &P[1];
  do
  {
    if ( *v34 )
      ExFreePoolWithTag(*v35, 0);
    ++v34;
    v35 += 9;
    --v16;
  }
  while ( v16 );
  if ( v59 )
  {
    v51 = v72;
    if ( v72 )
    {
      AuthzBasepFreeSecurityAttributesList(v72);
      ExFreePoolWithTag(v51, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v33 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
