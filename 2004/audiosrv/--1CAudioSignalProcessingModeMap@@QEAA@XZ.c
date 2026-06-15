/*
 * XREFs of ??1CAudioSignalProcessingModeMap@@QEAA@XZ @ 0x1801198F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap(CAudioSignalProcessingModeMap *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    free(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
