/*
 * XREFs of ?HandleReadCompletion@ConsumerControlNexusDevice@@CAXKKPEAU_OVERLAPPED@@@Z @ 0x1800A32B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlNexusDevice::HandleReadCompletion(
        DWORD dwErrorCode,
        DWORD dwNumberOfBytesTransfered,
        char *lpOverlapped)
{
  char *v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rdx
  char *v7; // rax
  char **v8; // rcx
  char **v9; // rcx

  v3 = lpOverlapped - 24;
  v4 = dwNumberOfBytesTransfered;
  v5 = *(_QWORD *)v3;
  v6 = (_QWORD *)*((_QWORD *)v3 + 2);
  *((_QWORD *)v3 + 8) = v4;
  *((_DWORD *)v3 + 14) = dwErrorCode;
  v7 = (char *)(v6 + 6);
  if ( *(char **)(v5 + 8) != v3
    || (v8 = (char **)*((_QWORD *)v3 + 1), *v8 != v3)
    || (*v8 = (char *)v5, *(_QWORD *)(v5 + 8) = v8, --v6[11], v9 = (char **)v6[7], *v9 != v7) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v3 = v7;
  *((_QWORD *)v3 + 1) = v9;
  *v9 = v3;
  ++v6[8];
  v6[7] = v3;
}
