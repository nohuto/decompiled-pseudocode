/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCManagerClient@@UEAAJEI@Z @ 0x18010B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::SetConvertGraspToSystemGesture(MPCManagerClient *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 200) + 184LL);
  if ( !v2 )
    return 2147549443LL;
  LOBYTE(a2) = (_BYTE)a2 != 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, a2);
}
