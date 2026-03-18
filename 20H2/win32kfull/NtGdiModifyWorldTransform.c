/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C00ADD10
 * Callers:
 *     <none>
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C00AA2D8 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memcmp @ 0x1C015A120 (memcmp.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02B5CF0 (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v3; // edi
  struct _XFORML *v5; // r14
  DC *v6; // rbx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v8; // eax
  DC *v9; // rax
  __int64 v10; // rcx
  DC *v11; // rcx
  struct _DC_ATTR *v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  DC *v17; // [rsp+20h] [rbp-39h] BYREF
  int v18; // [rsp+28h] [rbp-31h]
  unsigned int v19; // [rsp+2Ch] [rbp-2Dh]
  int v20; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-21h] BYREF
  __int128 Buf1; // [rsp+48h] [rbp-11h] BYREF
  __int128 v23; // [rsp+58h] [rbp-1h]
  int v24; // [rsp+68h] [rbp+Fh]
  struct _XFORML v25; // [rsp+70h] [rbp+17h] BYREF

  v3 = 0;
  v5 = a2;
  v18 = 0;
  v19 = 0;
  LOBYTE(a2) = 1;
  v17 = (DC *)HmgLockEx(a1, a2, 0LL);
  v6 = v17;
  if ( !v17 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_46;
  }
  if ( (*((_DWORD *)v17 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
    if ( UserAttr && !DC::SaveAttributes(v17, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
      v6 = 0LL;
      v17 = 0LL;
      goto LABEL_25;
    }
    *((_DWORD *)v17 + 11) |= 2u;
    v6 = v17;
    v18 = 1;
  }
  if ( (*((_DWORD *)v6 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v6);
LABEL_46:
    v6 = v17;
  }
  if ( !v6 )
    return v3;
  memset(&v25, 0, sizeof(v25));
  if ( v5 )
  {
    v8 = ProbeAndConvertXFORM(v5, &v25);
    v6 = v17;
    v3 = v8;
  }
  else
  {
    LOBYTE(v3) = a3 == 1;
  }
  if ( v3 )
  {
    v3 = 0;
    v24 = 0;
    Buf1 = 0LL;
    v23 = 0LL;
    if ( a3 == 1 )
    {
LABEL_37:
      if ( (*(_DWORD *)(*((_QWORD *)v6 + 122) + 340LL) & 2) != 0 )
        goto LABEL_24;
      *(_OWORD *)((char *)v6 + 392) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)((char *)v6 + 408) = *((_OWORD *)&gmxIdentity_LToL + 1);
      v15 = *((_QWORD *)v17 + 122);
      *(_OWORD *)(v15 + 356) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v15 + 372) = *((_OWORD *)&gmxIdentity_LToL + 1);
      goto LABEL_39;
    }
    if ( a3 <= 1 )
      goto LABEL_25;
    if ( a3 > 3 )
    {
      if ( a3 != 4 )
        goto LABEL_25;
      if ( v25.eM11 == 1.0 && v25.eM12 == 0.0 && v25.eM21 == 0.0 && v25.eM22 == 1.0 && v25.eDx == 0.0 && v25.eDy == 0.0 )
        goto LABEL_37;
      vConvertXformToMatrix(&v25, &Buf1);
      if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      {
        v9 = v17;
        *(_OWORD *)((char *)v17 + 392) = Buf1;
        *(_OWORD *)((char *)v9 + 408) = v23;
        v10 = *((_QWORD *)v17 + 122);
        *(_OWORD *)(v10 + 356) = Buf1;
        *(_OWORD *)(v10 + 372) = v23;
        goto LABEL_22;
      }
      goto LABEL_54;
    }
    vConvertXformToMatrix(&v25, &Buf1);
    v6 = v17;
    if ( (*(_DWORD *)(*((_QWORD *)v17 + 122) + 340LL) & 2) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v21, (struct XDCOBJ *)&v17, 0x203u);
      if ( !v21[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v21, (struct MATRIX *)&Buf1, a3) )
      {
LABEL_54:
        v6 = v17;
        goto LABEL_25;
      }
      v6 = v17;
    }
    if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
    {
      *(_OWORD *)((char *)v6 + 392) = Buf1;
      *(_OWORD *)((char *)v6 + 408) = v23;
      v16 = *((_QWORD *)v17 + 122);
      *(_OWORD *)(v16 + 356) = Buf1;
      *(_OWORD *)(v16 + 372) = v23;
      if ( !memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) )
      {
LABEL_39:
        *(_DWORD *)(*((_QWORD *)v17 + 122) + 340LL) |= 0x80B2u;
        goto LABEL_23;
      }
LABEL_22:
      v11 = v17;
      *(_DWORD *)(*((_QWORD *)v17 + 122) + 340LL) |= 0x80B0u;
      *(_DWORD *)(*((_QWORD *)v11 + 122) + 340LL) &= ~2u;
LABEL_23:
      v6 = v17;
LABEL_24:
      v3 = 1;
    }
  }
LABEL_25:
  if ( v6 )
  {
    if ( v18 && (*((_DWORD *)v6 + 11) & 2) != 0 )
    {
      if ( !v19 )
      {
        v12 = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
        if ( v12 )
          DC::RestoreAttributes(v17, v12);
        v6 = v17;
      }
      *((_DWORD *)v6 + 11) &= ~2u;
      v18 = 0;
      v6 = v17;
    }
    v20 = 0;
    v13 = *(_QWORD *)v6;
    HmgDecrementExclusiveReferenceCountEx(v6, v19, &v20);
    if ( v20 )
      bDeleteDCInternalEx(v13, 0LL);
  }
  return v3;
}
