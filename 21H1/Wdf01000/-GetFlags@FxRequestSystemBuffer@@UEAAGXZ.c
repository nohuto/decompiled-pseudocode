/*
 * XREFs of ?GetFlags@FxRequestSystemBuffer@@UEAAGXZ @ 0x1C0055A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxRequestSystemBuffer::GetFlags(FxRequestSystemBuffer *this)
{
  char *v1; // rcx
  char v2; // al
  unsigned int v3; // ecx
  _BOOL8 result; // rax

  v1 = (char *)*((_QWORD *)this[-7].m_Buffer + 23);
  v2 = *v1;
  result = 0;
  if ( *v1 != 3 )
  {
    if ( v2 == 4 )
      return 1;
    if ( (unsigned __int8)(v2 - 14) <= 1u )
    {
      v3 = *((_DWORD *)v1 + 6) & 3;
      if ( v3 )
      {
        if ( v3 <= 2 )
          return 1;
      }
    }
  }
  return result;
}
