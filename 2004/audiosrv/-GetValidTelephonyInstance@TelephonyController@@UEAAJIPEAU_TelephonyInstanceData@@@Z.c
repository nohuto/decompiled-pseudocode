/*
 * XREFs of ?GetValidTelephonyInstance@TelephonyController@@UEAAJIPEAU_TelephonyInstanceData@@@Z @ 0x1801424E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall TelephonyController::GetValidTelephonyInstance(
        TelephonyController *this,
        unsigned int a2,
        struct _TelephonyInstanceData *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // r10d

  v3 = 0;
  if ( a3 )
  {
    if ( a2 >= (unsigned __int64)(3LL * *((_QWORD *)this + 5)) )
      return (unsigned int)-2147024809;
    v6 = a2 / 3;
    v7 = a2 / 3;
    if ( v7 >= *((_QWORD *)this + 5) )
      goto LABEL_18;
    v8 = (__int64 *)*((_QWORD *)this + 3);
    if ( !v8 )
      goto LABEL_18;
    if ( v6 )
    {
      v9 = (unsigned int)v7;
      do
      {
        v8 = (__int64 *)*v8;
        --v9;
      }
      while ( v9 );
    }
    if ( !v8 )
LABEL_18:
      ATL::AtlThrowImpl(-2147467259);
    *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 4);
    v10 = a2 % 3;
    if ( !v10 )
    {
      *(_DWORD *)a3 = 0;
      return v3;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *(_DWORD *)a3 = 1;
      return v3;
    }
    if ( v11 == 1 )
      *(_DWORD *)a3 = 2;
    else
      return (unsigned int)-2147024809;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
