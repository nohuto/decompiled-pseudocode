/*
 * XREFs of NtGdiExtGetObjectW @ 0x1C0099ED0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtGdiExtGetObjectW(HBRUSH a1, unsigned int a2, void *a3)
{
  unsigned int v6; // r15d
  int v7; // ebx
  int ObjectW; // eax
  unsigned int v9; // esi
  ULONG64 v10; // rcx
  _BYTE Src[592]; // [rsp+20h] [rbp-288h] BYREF

  v6 = (unsigned int)a1 & 0x7F0000;
  memset(Src, 0, sizeof(Src));
  if ( a2 > 0x250 )
    a2 = 592;
  v7 = a2;
  if ( v6 == 0x100000 )
    v7 = 16;
  ObjectW = GreExtGetObjectW(a1);
  v9 = ObjectW;
  if ( v6 == 0x100000 && v7 >= (int)a2 )
    v7 = a2;
  if ( ObjectW && a3 )
  {
    if ( v7 < ObjectW )
      ObjectW = v7;
    v10 = (ULONG64)a3 + ObjectW;
    if ( v10 > MmUserProbeAddress || v10 <= (unsigned __int64)a3 || ((unsigned __int8)a3 & 1) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a3, Src, ObjectW);
  }
  return v9;
}
