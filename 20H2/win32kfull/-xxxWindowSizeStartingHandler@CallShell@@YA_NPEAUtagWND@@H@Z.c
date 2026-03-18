/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023D4F4
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F6A4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C007F1D0 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

bool __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  char v5; // r8
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  int v10[16]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = (int)a2;
  memset(v10, 0, sizeof(v10));
  *(_QWORD *)v10 = *(_QWORD *)this;
  v10[2] = 2;
  v10[7] = v3;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 432) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  v8 = *((_QWORD *)this + 5);
  v10[8] = v7;
  TransformRectBetweenCoordinateSpaces(&v10[3], v8 + 88, *(_QWORD *)(*(_QWORD *)(v2 + 456) + 328LL), this);
  return (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v10) != 0;
}
