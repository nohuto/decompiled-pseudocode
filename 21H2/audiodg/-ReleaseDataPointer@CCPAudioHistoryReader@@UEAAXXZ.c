/*
 * XREFs of ?ReleaseDataPointer@CCPAudioHistoryReader@@UEAAXXZ @ 0x140060000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCPAudioHistoryReader::ReleaseDataPointer(CCPAudioHistoryReader *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // ecx
  int v4; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = *((_DWORD *)this + 18);
  if ( v3 == *((_DWORD *)this + 19) )
  {
    v4 = -1;
  }
  else if ( v3 == *((_DWORD *)this + 23) - 1 )
  {
    v4 = 0;
  }
  else
  {
    v4 = v3 + 1;
  }
  *((_DWORD *)this + 18) = v4;
  if ( v1 )
    LeaveCriticalSection(v1);
}
