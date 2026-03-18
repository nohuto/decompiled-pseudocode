/*
 * XREFs of ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C0032764
 * Callers:
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(_VIDSCH_GLOBAL *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)*((_QWORD *)this + 404);
  if ( v2 != (char *)this + 3240 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 404) = 0LL;
  *((_DWORD *)this + 848) = 0;
  v3 = (char *)*((_QWORD *)this + 310);
  if ( v3 != (char *)this + 2488 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 310) = 0LL;
  *((_DWORD *)this + 630) = 0;
  v4 = (char *)*((_QWORD *)this + 78);
  if ( v4 != (char *)this + 632 && v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 174) = 0;
  v5 = (char *)*((_QWORD *)this + 74);
  if ( v5 != (char *)this + 600 && v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 154) = 0;
  v6 = (char *)*((_QWORD *)this + 68);
  if ( v6 != (char *)this + 552 && v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 142) = 0;
  v7 = (char *)*((_QWORD *)this + 62);
  if ( v7 != (char *)this + 504 && v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 130) = 0;
  v8 = (char *)*((_QWORD *)this + 56);
  if ( v8 != (char *)this + 456 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 118) = 0;
}
