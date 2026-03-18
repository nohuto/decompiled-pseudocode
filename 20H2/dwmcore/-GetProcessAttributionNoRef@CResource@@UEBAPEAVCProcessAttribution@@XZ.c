/*
 * XREFs of ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800B7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CProcessAttribution *__fastcall CResource::GetProcessAttributionNoRef(CResource *this)
{
  struct CProcessAttribution *result; // rax

  result = (struct CProcessAttribution *)*((_QWORD *)this + 6);
  if ( result )
    return (struct CProcessAttribution *)*((_QWORD *)result + 5);
  return result;
}
