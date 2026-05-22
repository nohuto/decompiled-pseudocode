/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C18B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEFCC (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SharedUnknownBase<ISIPCEndpoint>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  SharedObjectBase *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8

  v4 = (SharedObjectBase *)(a1 - 16);
  v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v5 )
    goto LABEL_4;
  v7 = *a2 - *(_QWORD *)&GUID_660f874e_2d32_4a14_b690_0abd14d5c4fb.Data1;
  if ( *a2 == *(_QWORD *)&GUID_660f874e_2d32_4a14_b690_0abd14d5c4fb.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_660f874e_2d32_4a14_b690_0abd14d5c4fb.Data4;
  if ( v7 )
    v6 = 0LL;
  else
LABEL_4:
    v6 = a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64);
  if ( v6 )
  {
    if ( a3 )
    {
      SharedObjectBase::AddPublicReference(v4);
      result = 0LL;
      *v10 = v9;
    }
    else
    {
      return 2147500035LL;
    }
  }
  else
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  return result;
}
