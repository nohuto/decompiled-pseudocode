/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18005D2BC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(unsigned __int64 this)
{
  unsigned __int64 v1; // rbx
  int v2; // edi
  _QWORD *v3; // r14
  unsigned int v4; // esi
  CExpressionValue *v5; // rax
  _DWORD *v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // xmm5_4
  int v10; // xmm4_4
  int v11; // xmm3_4
  int v12; // xmm2_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  unsigned int v16; // [rsp+20h] [rbp-A8h]
  _BYTE v17[80]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v18[6]; // [rsp+80h] [rbp-48h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) >= 6u )
  {
    v2 = 0;
    v3 = v18;
    v4 = 0;
    while ( 1 )
    {
      this = (unsigned int)(v2 + *(_DWORD *)(v1 + 16) - 6);
      if ( (unsigned int)this < *(_DWORD *)(v1 + 48) )
      {
        v6 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * this);
      }
      else
      {
        v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
        v6 = &CExpressionValueStack::s_emptyValue;
      }
      v7 = v6[18] == 18;
      *v3 = v6;
      if ( !v7 )
        break;
      ++v2;
      ++v3;
      if ( v2 >= 6 )
      {
        v8 = v18[0];
        v9 = *(_DWORD *)v18[0];
        v10 = *(_DWORD *)v18[1];
        v11 = *(_DWORD *)v18[2];
        v12 = *(_DWORD *)v18[3];
        v13 = *(_DWORD *)v18[4];
        v14 = *(_DWORD *)v18[5];
        *(_DWORD *)(v18[0] + 72LL) = 104;
        *(_DWORD *)v8 = v9;
        *(_DWORD *)(v8 + 4) = v10;
        *(_DWORD *)(v8 + 8) = v11;
        *(_DWORD *)(v8 + 12) = v12;
        *(_DWORD *)(v8 + 16) = v13;
        *(_DWORD *)(v8 + 20) = v14;
        *(_BYTE *)(v8 + 76) = 1;
        *(_DWORD *)(v1 + 16) -= 5;
        return v4;
      }
    }
    v16 = 5536;
  }
  else
  {
    v16 = 5522;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16,
    0LL);
  return v4;
}
