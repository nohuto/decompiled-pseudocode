/*
 * XREFs of ?SetActiveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800A2244
 * Callers:
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009EFC4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 * Callees:
 *     <none>
 */

char __fastcall LampArrayDevice::SetActiveViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  char v5; // bl
  _QWORD *i; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 4); i != (_QWORD *)((char *)this + 32); i = (_QWORD *)*i )
    {
      if ( i[2] == *(_QWORD *)a2 )
      {
        *((_QWORD *)this + 12) = i;
        goto LABEL_8;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
LABEL_8:
    v5 = 1;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
