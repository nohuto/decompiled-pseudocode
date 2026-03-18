/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C0048E44
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0048B00 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::CConnection(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *result; // rax

  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 6) = 8LL;
  *(_DWORD *)this = 1;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  result = this;
  *((_DWORD *)this + 44) = 60;
  *((_DWORD *)this + 45) = 1;
  return result;
}
