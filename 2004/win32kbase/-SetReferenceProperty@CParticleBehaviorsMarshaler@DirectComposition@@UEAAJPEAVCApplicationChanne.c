/*
 * XREFs of ?SetReferenceProperty@CParticleBehaviorsMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01DA300
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetReferenceProperty(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rdx
  struct DirectComposition::CResourceMarshaler *v15; // rdx
  struct DirectComposition::CResourceMarshaler *v16; // rdx
  struct DirectComposition::CResourceMarshaler *v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  struct DirectComposition::CResourceMarshaler *v22; // rdx
  struct DirectComposition::CResourceMarshaler *v23; // rdx
  struct DirectComposition::CResourceMarshaler *v24; // rdx
  struct DirectComposition::CResourceMarshaler *v25; // rdx
  struct DirectComposition::CResourceMarshaler *v26; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 > 5 )
  {
    v18 = a3 - 6;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1
              && (!a4
               || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                    a4,
                    120LL)) )
            {
              v22 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
              if ( a4 != v22 )
              {
                if ( v22 )
                  DirectComposition::CApplicationChannel::ReleaseResource(a2, v22);
                *((_QWORD *)this + 17) = a4;
                if ( a4 )
                  DirectComposition::CResourceMarshaler::AddRef(a4);
                *((_DWORD *)this + 4) |= 0x8000u;
                goto LABEL_102;
              }
              return v5;
            }
          }
          else if ( !a4
                 || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                      a4,
                      121LL) )
          {
            v23 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
            if ( a4 != v23 )
            {
              if ( v23 )
                DirectComposition::CApplicationChannel::ReleaseResource(a2, v23);
              *((_QWORD *)this + 16) = a4;
              if ( a4 )
                DirectComposition::CResourceMarshaler::AddRef(a4);
              *((_DWORD *)this + 4) |= 0x4000u;
              goto LABEL_102;
            }
            return v5;
          }
        }
        else if ( !a4
               || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                    a4,
                    121LL) )
        {
          v24 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
          if ( a4 != v24 )
          {
            if ( v24 )
              DirectComposition::CApplicationChannel::ReleaseResource(a2, v24);
            *((_QWORD *)this + 15) = a4;
            if ( a4 )
              DirectComposition::CResourceMarshaler::AddRef(a4);
            *((_DWORD *)this + 4) |= 0x2000u;
            goto LABEL_102;
          }
          return v5;
        }
      }
      else if ( !a4
             || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  122LL) )
      {
        v25 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
        if ( a4 != v25 )
        {
          if ( v25 )
            DirectComposition::CApplicationChannel::ReleaseResource(a2, v25);
          *((_QWORD *)this + 14) = a4;
          if ( a4 )
            DirectComposition::CResourceMarshaler::AddRef(a4);
          *((_DWORD *)this + 4) |= 0x1000u;
          goto LABEL_102;
        }
        return v5;
      }
    }
    else if ( !a4
           || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                120LL) )
    {
      v26 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
      if ( a4 != v26 )
      {
        if ( v26 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v26);
        *((_QWORD *)this + 13) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x800u;
        goto LABEL_102;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 5 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           116LL) )
    {
      v17 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
      if ( a4 != v17 )
      {
        if ( v17 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
        *((_QWORD *)this + 12) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x400u;
        goto LABEL_102;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           122LL) )
    {
      v16 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
      if ( a4 != v16 )
      {
        if ( v16 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v16);
        *((_QWORD *)this + 7) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x20u;
        goto LABEL_102;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           122LL) )
    {
      v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( a4 != v15 )
      {
        if ( v15 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
        *((_QWORD *)this + 8) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x40u;
        goto LABEL_102;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           120LL) )
    {
      v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
      if ( a4 != v14 )
      {
        if ( v14 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
        *((_QWORD *)this + 9) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x80u;
        goto LABEL_102;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            123LL)) )
    {
      v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
      if ( a4 != v12 )
      {
        if ( v12 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
        *((_QWORD *)this + 11) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x200u;
LABEL_102:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          120LL) )
  {
    return (unsigned int)-1073741811;
  }
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( a4 != v13 )
  {
    if ( v13 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
    *((_QWORD *)this + 10) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= 0x100u;
    goto LABEL_102;
  }
  return v5;
}
